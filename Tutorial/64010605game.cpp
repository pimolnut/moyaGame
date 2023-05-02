#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include <sstream>
#include <utility>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
#include <stdio.h>
#include "ScoreList.h"

using namespace std;
using namespace sf;

int WindowWidth = 800;
int WindowHeight = 600;
int Coin5_x = 469;

int Path[][2] = { {7, 96}, { 7,101 }, { 7,106 }, { 7,106 }, { 7,111 }, { 7,116 }, { 7,121 }, { 7,126 }, { 7,131 }, { 7,136 }, { 7,141 }, { 7,146 },
{ 7,151 }, { 7,156 }, { 7,161 }, { 7,166 }, { 7,171 }, { 7,176 }, { 7,181 }, { 7,181 }, { 7,181 }, { 7,181 }, { 12,181 },
{ 17,181 }, { 22,181 }, { 27,181 }, { 32,181 }, { 37,181 }, { 42,181 }, { 47,181 }, { 52,181 }, { 57,181 }, { 62,181 },
{ 67,181 }, { 72,181 }, { 77,181 }, { 82,181 }, { 87,181 }, { 92,181 }, { 97,181 }, { 97,181 }, { 97,176 }, { 97,171 },
{ 97,166 }, { 97,161 }, { 97,156 }, { 97,151 }, { 97,146 }, { 97,141 }, { 97,136 }, { 97,131 }, { 97,126 }, { 97,126 },
{ 97,121 }, { 97,116 }, { 97,111 }, { 97,106 }, { 97,101 }, { 97,96 }, { 97,101 }, { 97,106 }, { 97,111 }, { 97,116 },
{ 97,121 }, { 97,126 }, { 97,131 }, { 97,136 }, { 97,136 }, { 97,141 }, { 97,146 }, { 97,151 }, { 97,151 }, { 97,156 },
{ 97,156 }, { 97,161 }, { 97,166 }, { 97,171 }, { 97,176 }, { 97,176 }, { 97,181 }, { 97,186 }, { 97,191 }, { 97,196 },
{ 97,201 }, { 97,206 }, { 97,211 }, { 97,216 }, { 97,221 }, { 97,226 }, { 97,231 }, { 97,236 }, { 97,241 }, { 97,246 },
{ 97,251 }, { 97,256 }, { 97,261 }, { 97,266 }, { 97,271 }, { 97,276 }, { 97,281 }, { 97,281 }, { 97,286 }, { 97,291 },
{ 97,296 }, { 97,301 }, { 97,306 }, { 97,311 }, { 97,316 }, { 97,321 }, { 97,326 }, { 97,331 }, { 97,336 }, { 97,341 },
{ 97,346 }, { 97,351 }, { 97,356 }, { 97,361 }, { 92,361 }, { 87,361 }, { 82,361 }, { 77,361 }, { 72,361 }, { 67,361 },
{ 62,361 }, { 57,361 }, { 52,361 }, { 47,361 }, { 42,361 }, { 37,361 }, { 32,361 }, { 27,361 }, { 22,361 }, { 17,361 },
{ 12,361 }, { 7,361 }, { 7,366 }, { 7,371 }, { 7,376 }, { 7,381 }, { 7,386 }, { 7,391 }, { 7,396 }, { 7,401 }, { 7,406 },
{ 7,411 }, { 7,416 }, { 7,421 }, { 7,426 }, { 7,431 }, { 7,436 }, { 7,441 }, { 7,446 }, { 7,451 }, { 7,451 }, { 12,451 },
{ 17,451 }, { 22,451 }, { 27,451 }, { 32,451 }, { 37,451 }, { 42,451 }, { 47,451 }, { 52,451 }, { 57,451 }, { 62,451 },
{ 67,451 }, { 72,451 }, { 77,451 }, { 82,451 }, { 87,451 }, { 92,451 }, { 97,451 }, { 102,451 }, { 107,451 }, { 112,451 },
{ 117,451 }, { 122,451 }, { 127,451 }, { 132,451 }, { 137,451 }, { 142,451 }, { 147,451 }, { 152,451 }, { 157,451 }, { 162,451 },
{ 167,451 }, { 172,451 }, { 177,451 }, { 182,451 }, { 187,451 }, { 192,451 }, { 197,451 }, { 202,451 }, { 207,451 }, { 212,451 },
{ 217,451 }, { 222,451 }, { 227,451 }, { 232,451 }, { 237,451 }, { 242,451 }, { 247,451 }, { 252,451 }, { 257,451 }, { 262,451 },
{ 267,451 }, { 272,451 }, { 277,451 }, { 282,451 }, { 287,451 }, { 292,451 }, { 297,451 }, { 302,451 }, { 307,451 }, { 312,451 },
{ 317,451 }, { 322,451 }, { 327,451 }, { 332,451 }, { 337,451 }, { 342,451 }, { 347,451 }, { 352,451 }, { 357,451 }, { 362,451 },
{ 367,451 }, { 372,451 }, { 377,451 }, { 382,451 }, { 387,451 }, { 392,451 }, { 397,451 }, { 402,451 }, { 407,451 }, { 412,451 },
{ 417,451 }, { 422,451 }, { 427,451 }, { 432,451 }, { 437,451 }, { 442,451 }, { 447,451 }, { 452,451 }, { 457,451 }, { 462,451 },
{ 467,451 }, { 472,451 }, { 477,451 }, { 482,451 }, { 487,451 }, { 492,451 }, { 497,451 }, { 502,451 }, { 507,451 }, { 512,451 },
{ 517,451 }, { 522,451 }, { 527,451 }, { 532,451 }, { 537,451 }, { 542,451 }, { 547,451 }, { 552,451 }, { 557,451 }, { 562,451 },
{ 567,451 }, { 572,451 }, { 577,451 }, { 582,451 }, { 587,451 }, { 592,451 }, { 597,451 }, { 602,451 }, { 607,451 }, { 612,451 },
{ 617,451 }, { 622,451 }, { 627,451 }, { 632,451 }, { 637,451 }, { 642,451 }, { 647,451 }, { 652,451 }, { 657,451 }, { 662,451 },
{ 667,451 }, { 672,451 }, { 677,451 }, { 682,451 }, { 687,451 }, { 692,451 }, { 697,451 }, { 697,451 }, { 702,451 }, { 707,451 },
{ 712,451 }, { 717,451 }, { 722,451 }, { 97,271 }, { 92,271 }, { 87,271 }, { 82,271 }, { 82,271 }, { 77,271 }, { 72,271 },
{ 67,271 }, { 62,271 }, { 57,271 }, { 52,271 }, { 47,271 }, { 42,271 }, { 37,271 }, { 32,271 }, { 27,271 }, { 22,271 },
{ 17,271 }, { 12,271 }, { 7,271 }, { 2,271 }, { -3,271 }, { -8,271 }, { -13,271 }, { -18,271 }, { -13,271 }, { -8,271 },
{ -3,271 }, { 2,271 }, { 7,271 }, { 12,271 }, { 17,271 }, { 22,271 }, { 27,271 }, { 32,271 }, { 37,271 }, { 42,271 },
{ 47,271 }, { 52,271 }, { 57,271 }, { 62,271 }, { 67,271 }, { 72,271 }, { 77,271 }, { 82,271 }, { 87,271 }, { 92,271 },
{ 97,271 }, { 102,271 }, { 107,271 }, { 112,271 }, { 117,271 }, { 122,271 }, { 127,271 }, { 132,271 }, { 137,271 }, { 142,271 },
{ 147,271 }, { 152,271 }, { 157,271 }, { 162,271 }, { 167,271 }, { 172,271 }, { 177,271 }, { 182,271 }, { 187,271 }, { 192,271 },
{ 197,271 }, { 202,271 }, { 207,271 }, { 212,271 }, { 217,271 }, { 222,271 }, { 227,271 }, { 232,271 }, { 237,271 }, { 242,271 },
{ 247,271 }, { 252,271 }, { 257,271 }, { 262,271 }, { 267,271 }, { 272,271 }, { 277,271 }, { 187,271 }, { 187,266 }, { 187,261 },
{ 187,256 }, { 187,251 }, { 187,246 }, { 187,241 }, { 187,236 }, { 187,231 }, { 187,226 }, { 187,221 }, { 187,216 }, { 187,211 },
{ 187,206 }, { 187,201 }, { 187,196 }, { 187,191 }, { 187,186 }, { 187,181 }, { 187,176 }, { 187,171 }, { 187,166 }, { 187,161 },
{ 187,156 }, { 187,151 }, { 187,146 }, { 187,141 }, { 187,136 }, { 187,136 }, { 187,131 }, { 187,126 }, { 187,121 }, { 187,116 },
{ 187,111 }, { 187,106 }, { 187,101 }, { 187,96 }, { 187,96 }, { 187,101 }, { 187,106 }, { 187,111 }, { 187,116 }, { 187,121 },
{ 187,126 }, { 187,131 }, { 187,136 }, { 187,141 }, { 187,146 }, { 187,151 }, { 187,156 }, { 187,161 }, { 187,166 }, { 187,171 },
{ 187,176 }, { 187,181 }, { 187,186 }, { 187,191 }, { 187,196 }, { 187,201 }, { 187,206 }, { 187,211 }, { 187,216 }, { 187,221 },
{ 187,226 }, { 187,231 }, { 187,236 }, { 187,241 }, { 187,246 }, { 187,251 }, { 187,256 }, { 187,261 }, { 187,266 }, { 187,271 },
{ 187,276 }, { 187,281 }, { 187,286 }, { 187,291 }, { 187,296 }, { 187,301 }, { 187,306 }, { 187,311 }, { 187,316 }, { 187,321 },
{ 187,326 }, { 187,331 }, { 187,336 }, { 187,341 }, { 187,346 }, { 187,351 }, { 187,356 }, { 187,361 }, { 187,366 }, { 187,371 },
{ 187,376 }, { 187,381 }, { 187,386 }, { 187,391 }, { 187,396 }, { 187,401 }, { 187,406 }, { 187,411 }, { 187,416 }, { 187,421 },
{ 187,426 }, { 187,431 }, { 187,436 }, { 187,441 }, { 187,446 }, { 367,451 }, { 367,446 }, { 367,441 }, { 367,436 }, { 367,431 },
{ 367,426 }, { 367,421 }, { 367,416 }, { 367,411 }, { 367,406 }, { 367,401 }, { 367,396 }, { 367,391 }, { 367,386 }, { 367,381 },
{ 367,376 }, { 367,371 }, { 367,366 }, { 367,361 }, { 367,361 }, { 367,361 }, { 372,361 }, { 377,361 }, { 382,361 }, { 387,361 },
{ 392,361 }, { 397,361 }, { 402,361 }, { 407,361 }, { 407,361 }, { 412,361 }, { 417,361 }, { 422,361 }, { 422,361 }, { 427,361 },
{ 432,361 }, { 437,361 }, { 442,361 }, { 447,361 }, { 452,361 }, { 457,361 }, { 457,361 }, { 452,361 }, { 447,361 }, { 442,361 },
{ 437,361 }, { 432,361 }, { 427,361 }, { 422,361 }, { 417,361 }, { 412,361 }, { 407,361 }, { 402,361 }, { 397,361 }, { 392,361 },
{ 387,361 }, { 382,361 }, { 377,361 }, { 372,361 }, { 367,361 }, { 362,361 }, { 357,361 }, { 352,361 }, { 347,361 }, { 342,361 },
{ 337,361 }, { 332,361 }, { 327,361 }, { 322,361 }, { 317,361 }, { 312,361 }, { 307,361 }, { 302,361 }, { 297,361 }, { 292,361 },
{ 287,361 }, { 282,361 }, { 277,361 }, { 272,361 }, { 277,361 }, { 277,356 }, { 277,351 }, { 277,346 }, { 277,341 }, { 277,336 },
{ 277,331 }, { 277,326 }, { 277,321 }, { 277,316 }, { 277,311 }, { 277,306 }, { 277,301 }, { 277,296 }, { 277,291 }, { 277,286 },
{ 277,281 }, { 277,276 }, { 277,271 }, { 277,266 }, { 277,261 }, { 277,256 }, { 277,251 }, { 277,246 }, { 277,241 }, { 277,236 },
{ 277,231 }, { 277,226 }, { 277,221 }, { 277,216 }, { 277,211 }, { 277,206 }, { 277,206 }, { 277,201 }, { 277,201 }, { 277,196 },
{ 277,191 }, { 277,186 }, { 277,186 }, { 277,186 }, { 277,181 }, { 277,181 }, { 282,181 }, { 287,181 }, { 292,181 }, { 297,181 },
{ 302,181 }, { 307,181 }, { 312,181 }, { 317,181 }, { 322,181 }, { 327,181 }, { 332,181 }, { 337,181 }, { 342,181 }, { 347,181 },
{ 352,181 }, { 357,181 }, { 362,181 }, { 367,181 }, { 372,181 }, { 377,181 }, { 382,181 }, { 387,181 }, { 387,181 }, { 392,181 },
{ 397,181 }, { 402,181 }, { 407,181 }, { 412,181 }, { 417,181 }, { 422,181 }, { 427,181 }, { 432,181 }, { 437,181 }, { 442,181 },
{ 447,181 }, { 452,181 }, { 452,181 }, { 452,181 }, { 452,181 }, { 452,181 }, { 452,186 }, { 452,191 }, { 452,196 }, { 452,201 },
{ 452,206 }, { 452,211 }, { 452,216 }, { 452,221 }, { 452,226 }, { 452,231 }, { 452,236 }, { 452,241 }, { 452,246 }, { 452,251 },
{ 452,256 }, { 452,261 }, { 452,266 }, { 452,271 }, { 452,276 }, { 452,281 }, { 452,286 }, { 452,291 }, { 452,296 }, { 452,301 },
{ 452,306 }, { 452,311 }, { 452,316 }, { 452,321 }, { 452,326 }, { 452,331 }, { 452,336 }, { 452,341 }, { 452,346 }, { 452,351 },
{ 452,356 }, { 452,271 }, { 457,271 }, { 462,271 }, { 467,271 }, { 472,271 }, { 477,271 }, { 482,271 }, { 487,271 }, { 492,271 },
{ 497,271 }, { 502,271 }, { 507,271 }, { 512,271 }, { 517,271 }, { 522,271 }, { 527,271 }, { 532,271 }, { 537,271 }, { 542,271 },
{ 547,271 }, { 552,271 }, { 557,271 }, { 562,271 }, { 567,271 }, { 572,271 }, { 577,271 }, { 582,271 }, { 587,271 }, { 592,271 },
{ 597,271 }, { 602,271 }, { 607,271 }, { 612,271 }, { 617,271 }, { 622,271 }, { 627,271 }, { 632,271 }, { 637,271 }, { 642,271 },
{ 647,271 }, { 652,271 }, { 657,271 }, { 662,271 }, { 667,271 }, { 672,271 }, { 677,271 }, { 682,271 }, { 687,271 }, { 692,271 },
{ 697,271 }, { 702,271 }, { 707,271 }, { 712,271 }, { 717,271 }, { 717,271 }, { 722,271 }, { 727,271 }, { 732,271 }, { 737,271 },
{ 742,271 }, { 632,271 }, { 632,276 }, { 632,281 }, { 632,286 }, { 632,291 }, { 632,296 }, { 632,301 }, { 632,306 }, { 632,311 },
{ 632,316 }, { 632,321 }, { 632,326 }, { 632,331 }, { 632,336 }, { 632,341 }, { 632,346 }, { 632,351 }, { 632,356 }, { 632,361 },
{ 632,356 }, { 632,351 }, { 632,346 }, { 632,341 }, { 632,336 }, { 632,331 }, { 632,326 }, { 632,321 }, { 632,316 }, { 632,311 },
{ 632,306 }, { 632,301 }, { 632,296 }, { 632,291 }, { 632,286 }, { 632,281 }, { 632,276 }, { 632,271 }, { 632,266 }, { 632,261 },
{ 632,256 }, { 632,251 }, { 632,246 }, { 632,241 }, { 632,236 }, { 632,231 }, { 632,226 }, { 632,221 }, { 632,216 }, { 632,211 },
{ 632,206 }, { 632,201 }, { 632,196 }, { 632,191 }, { 632,186 }, { 632,181 }, { 632,176 }, { 632,171 }, { 632,166 }, { 632,161 },
{ 632,156 }, { 632,151 }, { 632,146 }, { 632,141 }, { 632,136 }, { 632,131 }, { 632,126 }, { 632,121 }, { 632,121 }, { 632,116 },
{ 632,111 }, { 632,106 }, { 632,101 }, { 632,96 }, { 632,91 }, { 632,96 }, { 632,106 }, { 632,186 }, { 632,186 }, { 637,186 },
{ 642,186 }, { 647,186 }, { 647,186 }, { 652,186 }, { 657,186 }, { 662,186 }, { 667,186 }, { 672,186 }, { 677,186 }, { 682,186 },
{ 687,186 }, { 692,186 }, { 697,186 }, { 697,186 }, { 702,186 }, { 707,186 }, { 712,186 }, { 717,186 }, { 722,186 }, { 722,186 },
{ 722,181 }, { 722,176 }, { 722,171 }, { 722,166 }, { 722,161 }, { 722,156 }, { 722,151 }, { 722,146 }, { 722,141 }, { 722,136 },
{ 722,131 }, { 722,126 }, { 722,121 }, { 722,116 }, { 722,116 }, { 722,111 }, { 722,106 }, { 722,101 }, { 722,96 }, { 632,361 },
{ 637,361 }, { 642,361 }, { 647,361 }, { 652,361 }, { 657,361 }, { 662,361 }, { 667,361 }, { 672,361 }, { 677,361 }, { 682,361 },
{ 687,361 }, { 692,361 }, { 697,361 }, { 702,361 }, { 707,361 }, { 712,361 }, { 717,361 }, { 722,361 }, { 722,361 }, { 722,366 },
{ 722,366 }, { 722,371 }, { 722,376 }, { 722,381 }, { 722,386 }, { 722,391 }, { 722,396 }, { 722,401 }, { 722,406 }, { 722,411 },
{ 722,416 }, { 722,421 }, { 722,426 }, { 722,431 }, { 722,436 }, { 722,441 }, { 722,446 }, { 722,451 }, { 722,451 }, { 542,451 },
{ 542,446 }, { 542,441 }, { 542,436 }, { 542,431 }, { 542,426 }, { 542,421 }, { 542,416 }, { 542,411 }, { 542,406 }, { 542,401 },
{ 542,396 }, { 542,391 }, { 542,386 }, { 542,381 }, { 542,376 }, { 542,371 }, { 542,366 }, { 542,361 }, { 542,356 }, { 542,351 },
{ 542,346 }, { 542,341 }, { 542,336 }, { 542,331 }, { 542,326 }, { 542,321 }, { 542,316 }, { 542,311 }, { 542,306 }, { 542,301 },
{ 542,296 }, { 542,291 }, { 542,286 }, { 542,281 }, { 542,276 }, { 542,271 }, { 542,266 }, { 542,261 }, { 542,256 }, { 542,251 },
{ 542,246 }, { 542,241 }, { 542,236 }, { 542,231 }, { 542,226 }, { 542,221 }, { 542,216 }, { 542,211 }, { 542,206 }, { 542,201 },
{ 542,196 }, { 542,191 }, { 542,186 }, { 542,181 }, { 542,176 }, { 542,171 }, { 542,166 }, { 542,161 }, { 542,156 }, { 542,151 },
{ 542,146 }, { 542,141 }, { 542,136 }, { 542,136 }, { 542,131 }, { 542,126 }, { 542,121 }, { 542,116 }, { 542,111 }, { 542,106 },
{ 542,101 }, { 542,96 }, { 537,96 }, { 532,96 }, { 527,96 }, { 522,96 }, { 517,96 }, { 512,96 }, { 507,96 }, { 502,96 },
{ 497,96 }, { 492,96 }, { 487,96 }, { 482,96 }, { 477,96 }, { 472,96 }, { 467,96 }, { 462,96 }, { 457,96 }, { 452,96 },
{ 447,96 }, { 442,96 }, { 437,96 }, { 432,96 }, { 427,96 }, { 422,96 }, { 417,96 }, { 412,96 }, { 407,96 }, { 402,96 },
{ 397,96 }, { 392,96 }, { 387,96 }, { 382,96 }, { 377,96 }, { 372,96 }, { 367,96 }, { 362,96 }, { 357,96 }, { 352,96 },
{ 347,96 }, { 342,96 }, { 337,96 }, { 332,96 }, { 327,96 }, { 322,96 }, { 317,96 }, { 312,96 }, { 307,96 }, { 302,96 },
{ 297,96 }, { 292,96 }, { 287,96 }, { 282,96 }, { 277,96 }, { 272,96 }, { 267,96 }, { 262,96 }, { 257,96 }, { 252,96 },
{ 247,96 }, { 242,96 }, { 237,96 }, { 232,96 }, { 227,96 }, { 222,96 }, { 217,96 }, { 212,96 }, { 207,96 }, { 202,96 },
{ 197,96 }, { 192,96 }, { 187,96 }, { 187,96 }, { 362,96 }, { 362,101 }, { 362,106 }, { 362,111 }, { 362,116 }, { 362,121 },
{ 362,126 }, { 362,131 }, { 362,136 }, { 362,141 }, { 362,146 }, { 362,151 }, { 362,156 }, { 362,161 }, { 362,166 }, { 362,171 },
{ 362,176 }, { 362,181 }, { 362,186 }, { 362,191 }, { 362,196 }, { 362,201 }, { 362,206 }, { 362,211 }, { 362,216 }, { 362,221 },
{ 362,226 }, { 362,226 }, { 362,231 }, { 362,236 }, { 362,241 }, { 362,246 }, { 362,251 }, { 362,256 }, { 362,261 }, { 362,266 },
{ 362,271 } };

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Path_size = sizeof(Path) / sizeof(int) / 2;
int Path_temp_size = 0;
int Path_temp[3000][2];

int WalkStep = 5;

int Visited_Path[2000][2];
int VisitedCount = 0;

int getPath(int source_x, int source_y,int target_x, int target_y,int path[][2], int step)
{
	//std::cout << "GO TO: " << source_x << ", " << source_y;
	//std::cout << ", step: " << step << std::endl;

	path[step][0] = source_x;
	path[step][1] = source_y;
	Visited_Path[VisitedCount][0] = source_x;
	Visited_Path[VisitedCount][1] = source_y;
	++step;
	++VisitedCount;

	if (source_x == target_x && source_y == target_y)
		return step;

	bool isVisited_left, isVisited_right, isVisited_up, isVisited_down;
	isVisited_left = isVisited_right = isVisited_up = isVisited_down = false;

	for (int i = 0; i < VisitedCount; i++)
	{
		if (Visited_Path[i][0] == source_x - WalkStep && Visited_Path[i][1] == source_y)
			isVisited_left = true;
		else if (Visited_Path[i][0] == source_x + WalkStep && Visited_Path[i][1] == source_y)
			isVisited_right = true;
		else if (Visited_Path[i][0] == source_x && Visited_Path[i][1] == source_y - WalkStep)
			isVisited_up = true;
		else if (Visited_Path[i][0] == source_x && Visited_Path[i][1] == source_y + WalkStep)
			isVisited_down = true;
	}

	bool canGo_left, canGo_right, canGo_up, canGo_down;
	canGo_left = canGo_right = canGo_up = canGo_down = false;
	for (int i = 0; i < Path_size; i++)
	{
		if (source_x - WalkStep == Path[i][0] && source_y == Path[i][1])
			canGo_left = true;
		else if (source_x + WalkStep == Path[i][0] && source_y == Path[i][1])
			canGo_right = true;
		else if (source_x == Path[i][0] && source_y - WalkStep == Path[i][1])
			canGo_up = true;
		else if (source_x == Path[i][0] && source_y + WalkStep == Path[i][1])
			canGo_down = true;
	}

	//std::cout << "isVisited_left = " << isVisited_left << ", canGo_left = " << canGo_left << std::endl;
	//std::cout << "isVisited_right = " << isVisited_right << ", canGo_right = " << canGo_right << std::endl;
	//std::cout << "isVisited_up = " << isVisited_up << ", canGo_up = " << canGo_up << std::endl;
	//std::cout << "isVisited_down = " << isVisited_down << ", canGo_down = " << canGo_down << std::endl;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////monster///////////////////////////////////////////////////////////////////////////////////////

	int result;

	if (!isVisited_left && canGo_left)
	{
		//std::cout << "go left" << std::endl;
		result = getPath(source_x - WalkStep, source_y, target_x, target_y, path, step);
		if (result != -1)
			return result;
	}

	if (!isVisited_up && canGo_up)
	{
		//std::cout << "go up" << std::endl;
		result = getPath(source_x, source_y - WalkStep, target_x, target_y, path, step);
		if (result != -1)
			return result;
	}

	if (!isVisited_right && canGo_right)
	{
		//std::cout << "go right" << std::endl;
		result = getPath(source_x + WalkStep, source_y, target_x, target_y, path, step);
		if (result != -1)
			return result;
	}


	if (!isVisited_down && canGo_down)
	{
		//std::cout << "go down" << std::endl;
		result = getPath(source_x, source_y + WalkStep, target_x, target_y, path, step);
		if (result != -1)
			return result;
	}

	return -1;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////// main ////////////////////////////////////////////////////////////////////////////////////////////
using namespace std;
void showHighScore(int x, int y, string word, sf::RenderWindow& window, sf::Font* font);

int main()
{
	ScoreList scorelist("highscore.txt");
	scorelist.loadFile();
	bool isMoyaAlive = true;
	int state;
	int moya_x = 7;//110;
	int moya_y = 126;//210;
	int monster_x = 722;//520; 97
	int monster_y = 451;//100; 156   x=722 y=451
	int step_index = -1;
	int monster_path[2000][2];
	int monster_freeze = 0;
	time_t t;
	srand((unsigned)time(&t));



	std::cout << "Reroute from " << monster_x << "," << monster_y << " to " << moya_x << "," << moya_y << std::endl;
	VisitedCount = 0;
	int step = getPath(monster_x, monster_y, moya_x, moya_y, monster_path, 0);
	std::cout << "DONE by step = " << step << std::endl;
	if (step == -1)
		std::cout << " Can't find rount T_T" << std::endl;
	else
		step_index = 1;


	RenderWindow window(VideoMode(WindowWidth, WindowHeight), "Moya by Mimi", Style::Titlebar | Style::Close);
	//Menu menu(window.getSize().x, window.getSize().y);

	Font font;
	Font xscore;
	Texture bg_texture, moya_texture, wall_texture, monster_texture;
	Texture menu_texture;
	Texture map_texture;
	Texture items1_texture, items2_texture, items4_texture, items5_texture;
	Texture itemsinmap_texture;
	Texture getitems_texture;
	Texture coin_texture;
	Texture win_texture;
	Texture welcome_texture;
	Texture clockitem_texture;
	Texture newitem_texture;
	Texture namename_texture;
	Texture gameover_texture;
	Texture scoreboard_texture;

	bg_texture.loadFromFile("Texture/Player/background.png");
	moya_texture.loadFromFile("Texture/Player/moyalasud.png");
	map_texture.loadFromFile("Texture/Player/mapmoya1.png");
	menu_texture.loadFromFile("Texture/Player/main menu.jpeg");
	monster_texture.loadFromFile("Texture/Player/monsterlasud.png");
	namename_texture.loadFromFile("Texture/Player/entername.png");
	gameover_texture.loadFromFile("Texture/Player/gameover.png");

	items1_texture.loadFromFile("Texture/Player/itemrerun.png"); //items
	items2_texture.loadFromFile("Texture/Player/itemrerun.png"); //items1
	items4_texture.loadFromFile("Texture/Player/itemrerun.png"); //items3
	items5_texture.loadFromFile("Texture/Player/itemrerun.png"); //items4

	coin_texture.loadFromFile("Texture/Player/newitem.png");
	getitems_texture.loadFromFile("Texture/Player/items.png");
	win_texture.loadFromFile("Texture/Player/win.png");

	welcome_texture.loadFromFile("Texture/Player/main menu.jpeg");
	clockitem_texture.loadFromFile("Texture/Player/newclock.png");
	newitem_texture.loadFromFile("Texture/Player/gold.png");
	scoreboard_texture.loadFromFile("Texture/Player/scoreboard.png");
	//itemsinmap_texture.loadFromFile("Texture/Player/collecitem.png");
	font.loadFromFile("Texture/Player/impact.ttf");
	xscore.loadFromFile("Texture/Player/impact.ttf");

	int score = 0;
	std::ostringstream ssScore;
	ssScore << "Score: " << score;

	Text scoretext("GAME OVER", font);
	Text name("PIMOLNUT SRIPHADEJKULLACHA 64010605", font);
	Text pacmoya("MOYA GAME", font, 75);
	//Text down("UP >> W // DOWN >> S // LEFT >> A // RIGHT >> D", font);
	Text welcome2("HIGH SCORE", font);
	Text welcome3("EXIT", font);
	Text entername("", font);
	Text back("BACK", font);
	Text restart("RESTART", font);

	// score 
	sf::Text lblScore;
	lblScore.setCharacterSize(30);
	lblScore.setPosition(400, 20);
	lblScore.setFont(xscore);
	lblScore.setString(ssScore.str());

	sf::Text namedisplay;
	namedisplay.setCharacterSize(30);
	namedisplay.setPosition(200, 535);
	namedisplay.setFont(xscore);

	sf::Text showscore;
	showscore.setCharacterSize(40);
	showscore.setPosition(520, 400);
	showscore.setFont(xscore);

	sf::Text showname;
	showname.setCharacterSize(40);
	showname.setPosition(200, 400);
	showname.setFont(xscore);

	sf::Music gameopen;
	gameopen.openFromFile("Texture/Player/soundopen.wav");
	gameopen.setLoop(true);
	gameopen.setVolume(20);
	gameopen.play();



	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	name.setPosition(400, 70);
	name.setScale(0.7f, 0.7f);
	entername.setPosition(480, 185);

	welcome2.setPosition(530, 530);
	welcome2.setScale(1.05f, 1.05f);
	welcome3.setPosition(700, 530);
	welcome3.setScale(1.05f, 1.05f);
	back.setPosition(400, 530);
	back.setScale(1.05f, 1.05f);
	restart.setPosition(300, 530);
	restart.setScale(1.05f, 1.05f);

	/*down.setScale(0.5f, 0.5f);
	down.setPosition(500, 580);
	*/
	pacmoya.setPosition(10, 5);

	scoretext.setPosition(400, 40);
	scoretext.setScale(0.7f, 0.7f);

	Sprite gold1, gold2, gold3;
	gold1.setTexture(newitem_texture);
	gold1.setScale(0.10f, 0.10f);
	gold2.setTexture(newitem_texture);
	gold2.setScale(0.10f, 0.10f);
	gold3.setTexture(newitem_texture);
	gold3.setScale(0.10f, 0.10f);

	Sprite gameover1;
	gameover1.setTexture(gameover_texture);
	gameover1.setScale(1.05f, 1.05f);
	gameover1.setPosition(-21, -20);


	Sprite scoreborad;
	scoreborad.setTexture(scoreboard_texture);
	scoreborad.setScale(1.05f, 1.05f);
	scoreborad.setPosition(-21, -20);

	Sprite win1;
	win1.setTexture(win_texture);
	win1.setScale(0.07f, 0.07f);

	Sprite coin1, coin2, coin3, coin4, coin5, coin6, coin7, coin8, coin9, coin10, coin11, coin12;
	coin1.setTexture(coin_texture);
	coin1.setScale(0.07f, 0.07f);
	//coin1.setPosition(292, 101);
	coin2.setTexture(coin_texture);
	coin2.setScale(0.07f, 0.07f);
	//coin2.setPosition(367, 101);
	coin3.setTexture(coin_texture);
	coin3.setScale(0.07f, 0.07f);
	//coin3.setPosition(442, 101);
	coin4.setTexture(coin_texture);
	coin4.setScale(0.07f, 0.07f);
	//coin4.setPosition(517, 101);
	coin5.setTexture(coin_texture);
	coin5.setScale(0.07f, 0.07f);
	//coin5.setPosition(217, 101);
	coin6.setTexture(coin_texture);
	coin6.setScale(0.07f, 0.07f);
	coin7.setTexture(coin_texture);
	coin7.setScale(0.07f, 0.07f);
	coin8.setTexture(coin_texture);
	coin8.setScale(0.07f, 0.07f);
	coin9.setTexture(coin_texture);
	coin9.setScale(0.07f, 0.07f);
	coin10.setTexture(coin_texture);
	coin10.setScale(0.07f, 0.07f);
	coin11.setTexture(coin_texture);
	coin11.setScale(0.07f, 0.07f);
	coin12.setTexture(coin_texture);
	coin12.setScale(0.07f, 0.07f);

	Sprite clitem1, clitem2, clitem3, clitem4, clitem5;
	clitem1.setTexture(clockitem_texture);
	clitem1.setScale(0.10f, 0.10f);
	clitem2.setTexture(clockitem_texture);
	clitem2.setScale(0.10f, 0.10f);
	clitem3.setTexture(clockitem_texture);
	clitem3.setScale(0.10f, 0.10f);
	clitem4.setTexture(clockitem_texture);
	clitem4.setScale(0.10f, 0.10f);
	clitem5.setTexture(clockitem_texture);
	clitem5.setScale(0.10f, 0.10f);

	Sprite welcome1;
	welcome1.setTexture(welcome_texture);
	welcome1.setScale(1.05f, 1.05f);

	Sprite getitems;
	getitems.setTexture(getitems_texture);

	Sprite bg, moya, monster;
	bg.setTexture(bg_texture);
	moya.setTexture(moya_texture);
	monster.setTexture(monster_texture);

	Sprite namename1;
	namename1.setTexture(namename_texture);
	//namename1.setPosition(-10, 0);

	Sprite map;
	map.setTexture(map_texture);

	Sprite items, items2, items4, items5;
	items.setTexture(items1_texture);
	items2.setTexture(items2_texture);
	items4.setTexture(items4_texture);
	items5.setTexture(items5_texture);

	Sprite itemsinmap;
	itemsinmap.setTexture(itemsinmap_texture);

	items.setScale(0.10f, 0.10f);
	items2.setScale(0.10f, 0.10f);
	items4.setScale(0.10f, 0.10f);
	items5.setScale(0.10f, 0.10f);

	getitems.setScale(0.10f, 0.10f);

	bg.setScale(2.0f, 2.0f);
	moya.setScale(0.100f, 0.100f);
	map.setScale(1.05f, 1.05f);
	namename1.setScale(1.00f, 1.00f);
	monster.setScale(0.100f, 0.100f);

	int getitems_x = 362, getitems_y = 276;

	bg.setPosition(0, 0);
	map.setPosition(-21, -20);
	moya.setPosition(moya_x, moya_y);
	monster.setPosition(monster_x, monster_y);
	itemsinmap.setPosition(getitems_x, getitems_y);

	int coin1_x = 288, coin1_y = 373;
	int coin2_x = 345, coin2_y = 375;
	int coin3_x = 421, coin3_y = 375;
	int coin4_x = 467, coin4_y = 375;
	int coin5_x = Coin5_x, coin5_y = 331;
	int coin6_x = 285, coin6_y = 331;
	int coin7_x = 285, coin7_y = 240;
	int coin8_x = 285, coin8_y = 193;
	int coin9_x = 467, coin9_y = 196;
	int coin10_x = 335, coin10_y = 196;
	int coin11_x = 420, coin11_y = 196;
	int coin12_x = 467, coin12_y = 240;
	///////////////////////////////////////////////////////////
	int position_index = rand() % Path_size;
	int coincl_1_x = Path[position_index][0], coincl_1_y = Path[position_index][1];
	position_index = rand() % Path_size;
	int coincl_2_x = Path[position_index][0], coincl_2_y = Path[position_index][1];
	position_index = rand() % Path_size;
	int coincl_3_x = Path[position_index][0], coincl_3_y = Path[position_index][1];
	position_index = rand() % Path_size;
	int coincl_4_x = Path[position_index][0], coincl_4_y = Path[position_index][1];
	position_index = rand() % Path_size;
	int coincl_5_x = Path[position_index][0], coincl_5_y = Path[position_index][1];
	//////////////////////////////////////////////////////////
	int win1_x = 376, win1_y = 271;
	int item1_x = 187, item1_y = 96;
	int item2_x = 720, item2_y = 106;
	int item3_x = 7, item3_y = 126;
	int item4_x = 7, item4_y = 451;
	///////////////////////////////////////////////////////////////////////////
	int gold_x = 722, gold_y = 451;
	int gold1_x = 97, gold1_y = 271;
	int gold2_x = 362, gold2_y = 171;

	////////////////////////////////////////////////////////////item//////////////////////////////////////////////////////////////////////
		//coin 1
	int coin_spawn_1 = 100;
	int coin_dissapear_1 = 200;
	//coin 2
	int coin_spawn_2 = 300;
	int coin_dissapear_2 = 200;
	//coin 3
	int coin_spawn_3 = 400;
	int coin_dissapear_3 = 200;
	//coin 4
	int coin_spawn_4 = 500;
	int coin_dissapear_4 = 200;
	//coin 5
	int coin_spawn_5 = 600;
	int coin_dissapear_5 = 200;

	//gold 1
	int gold_spawn = 1000;
	int gold_dissapear = 300;
	//gold 2
	int gold_spawn1 = 1500;
	int gold_dissapear1 = 300;
	//gold 3
	int gold_spawn2 = 2000;
	int gold_dissapear2 = 300;

	/////////////////////////////////////////////////////////////////////////////////////////////open////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	string enter_name = "";
	bool is_enter_name = true;
	bool is_scoreboardshow = false;
	bool cilkback = false;

	// main loop
	while (window.isOpen())
	{
		Event event;

		while (window.pollEvent(event))
		{
			if (event.type == Event::TextEntered && is_enter_name)
			{
				if (event.text.unicode == 8)
				{
					if (enter_name.size() > 0) enter_name.erase(enter_name.end() - 1);
				}
				if (event.text.unicode == 13) // เมื่อกด Enter ให้เริ่มเกมโดยเอาตัวแปร is_enter_name เป็นตัวอ้างอิง
				{
					//score_list.addEntry(name, score);
					namedisplay.setString(enter_name);
					is_enter_name = false;
				}
				if ((event.text.unicode >= 'A' && event.text.unicode <= 'Z') || (event.text.unicode >= 'a' && event.text.unicode <= 'z'))
				{
					if (enter_name.size() < 15) enter_name.push_back(event.text.unicode);
				}
				entername.setString(enter_name + "_");
			}
			if (event.type == Event::Closed)
			{
				window.close();
				return 0;
			}
			else if (event.type == Event::KeyPressed)
			{
				int dx = 0;
				int dy = 0;
				if (Keyboard::isKeyPressed(Keyboard::Key::W))
				{
					//std::cout << "Key W pressed" << std::endl;
					dy = -WalkStep;
				}
				else if (Keyboard::isKeyPressed(Keyboard::Key::S))
				{
					//std::cout << "Key S pressed" << std::endl;
					dy = WalkStep;
				}
				if (Keyboard::isKeyPressed(Keyboard::Key::A))
				{
					//std::cout << "Key A pressed" << std::endl;
					dx = -WalkStep;
				}
				else if (Keyboard::isKeyPressed(Keyboard::Key::D))
				{
					//std::cout << "Key D pressed" << std::endl;
					dx = WalkStep;
				}

				/*if (Keyboard::isKeyPressed(Keyboard::Key::Space))
				{

					std::cout << "save" << std::endl;
					Path_temp[Path_temp_size][0] = moya_x + dx;
					Path_temp[Path_temp_size][1] = moya_y + dy;
					Path_temp_size++;

				}*/
				/*else if (Keyboard::isKeyPressed(Keyboard::Key::Enter))
				{
					std::cout << "{";
					for (int i = 0; i < Path_temp_size; i++)
					{
						std::cout << "{" << Path_temp[i][0] << "," << Path_temp[i][1] << "},";

					}
					std::cout << "}" << std::endl;
				}*/


				if (dx != 0 || dy != 0)
				{
					int new_moya_x = moya_x + dx;
					int new_moya_y = moya_y + dy;
					for (int i = 0; i < Path_size; i++)
					{

						if (Path[i][0] == new_moya_x && Path[i][1] == new_moya_y)
						{
							moya_x = new_moya_x;
							moya_y = new_moya_y;

							// REROUTE MONSTER PATH HERE
						}
					}
				}

				//std::cout << " x=" << moya_x;
				//std::cout << " y=" << moya_y << std::endl;
			}
		}


		if (welcome2.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))
		{
			welcome2.setFillColor(sf::Color::Red);
			welcome2.setStyle(sf::Text::Underlined);
		}
		else if (welcome3.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))
		{
			welcome3.setFillColor(sf::Color::Red);
			welcome3.setStyle(sf::Text::Underlined);
		}
		else
		{
			welcome2.setFillColor(sf::Color::White);
			welcome3.setFillColor(sf::Color::White);
		}


		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (welcome2.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))
			{
				is_scoreboardshow = true;
			}
			else if (welcome3.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))
			{
				window.close();
			}

		}

		//std::cout << "moya_x" << moya_x << std::endl;
		//std::cout << "moya_y" << moya_y << std::endl;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////// monster  and item ////////////////////////////////////////////////////

		if (isMoyaAlive && is_enter_name == false)
		{
			if (monster_freeze == 0)
			{
				if (step_index != -1 && step_index < step)
				{
					monster_x = monster_path[step_index][0];
					monster_y = monster_path[step_index][1];
					++step_index;
				}
				else
				{
					//std::cout << "Reroute from " << monster_x << "," << monster_y << " to " << moya_x << "," << moya_y << std::endl;
					VisitedCount = 0;
					step = getPath(monster_x, monster_y, moya_x, moya_y, monster_path, 0);
					//std::cout << "DONE by step = " << step << std::endl;
					if (step > 0)
					{
						step_index = 1;
					}
				}
			}
			else
			{
				monster_freeze--;
			}
		}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				//std::cout << "monster_x" << monster_x << std::endl;
				//std::cout << "monster_y" << monster_y << std::endl;

		items.setPosition(item1_x, item1_y);
		items2.setPosition(item2_x, item2_y);
		items4.setPosition(item4_x, item4_y);
		coin1.setPosition(coin1_x, coin1_y);
		coin2.setPosition(coin2_x, coin2_y);
		coin3.setPosition(coin3_x, coin3_y);
		coin4.setPosition(coin4_x, coin4_y);
		coin5.setPosition(coin5_x, coin5_y);
		//down
		coin6.setPosition(coin6_x, coin6_y);
		coin7.setPosition(coin7_x, coin7_y);
		coin8.setPosition(coin8_x, coin8_y);
		coin9.setPosition(coin9_x, coin9_y);
		coin10.setPosition(coin10_x, coin10_y);
		coin11.setPosition(coin11_x, coin11_y);
		coin12.setPosition(coin12_x, coin12_y);

		///////////////////////////////////////////////////////////////////////
		clitem1.setPosition(coincl_1_x, coincl_1_y);
		clitem2.setPosition(coincl_2_x, coincl_2_y);
		clitem3.setPosition(coincl_3_x, coincl_3_y);
		clitem4.setPosition(coincl_4_x, coincl_4_y);
		clitem5.setPosition(coincl_5_x, coincl_5_y);
		gold1.setPosition(gold_x, gold_y);
		gold2.setPosition(gold1_x, gold1_y);
		gold3.setPosition(gold2_x, gold2_y);

		win1.setPosition(win1_x, win1_y);

		if (isMoyaAlive && is_enter_name == false) moya.setPosition(moya_x, moya_y);
		if (isMoyaAlive && is_enter_name == false) monster.setPosition(monster_x, monster_y);

		window.clear();
		window.draw(bg);

		window.draw(map);

		/*for (int i = 0; i < Path_size; i++)
		{
		Sprite moya_tmp;
		moya_tmp.setTexture(moya_texture);
		moya_tmp.setScale(0.025f, 0.025f);
		moya_tmp.setPosition(Path[i][0], Path[i][1]);
		window.draw(moya_tmp);
		}*/
	////////////////////////////////////////////////////////////item////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				/*for (int i = 0; i < Path_size; i++)
				{
					Sprite itemmap;
					itemmap.setTexture(itemsinmap_texture);
					itemmap.setScale(1.0f, 1.0f);
					itemmap.setPosition(Pathitem[i][0], Pathitem[i][1]);
					window.draw(itemmap);
				}*/
	//////////////score/////////////////////////////////////////////////////////////////////////////////score//////////////////////////////
	//////////////////////////////////////////////////////score////////////////////////////////////////////////////////////////////////
		if (isMoyaAlive && is_enter_name == false)
		{
			// Coin 1
			if (coin_spawn_1 > 0) {
				clitem1.setPosition(coincl_1_x - 1000, coincl_1_y - 1000);
				coin_spawn_1--;
			}
			else if (coin_spawn_1 <= 0) {
				
				clitem1.setPosition(coincl_1_x, coincl_1_y);
				window.draw(clitem1);

				if (coin_dissapear_1 > 0) coin_dissapear_1--;
				else if (coin_dissapear_1 <= 0) {
					coin_spawn_1 = 100;
					coin_dissapear_1 = 100;
				}
			}
			//coin 2
			if (coin_spawn_2 > 0) {
				clitem2.setPosition(coincl_2_x - 1000, coincl_2_y - 1000);
				coin_spawn_2--;
			}
			else if (coin_spawn_2 <= 0) {
				clitem2.setPosition(coincl_2_x, coincl_2_y);
				window.draw(clitem2);

				if (coin_dissapear_2 > 0) coin_dissapear_2--;
				else if (coin_dissapear_2 <= 0) {
					coin_spawn_2 = 100;
					coin_dissapear_2 = 100;
				}
			}
			//coin 3
			if (coin_spawn_3 > 0)
			{
				clitem3.setPosition(coincl_3_x - 1000, coincl_3_y - 1000);
				coin_spawn_3--;
			}
			else if (coin_spawn_3 <= 0)
			{
				clitem3.setPosition(coincl_3_x, coincl_3_y);
				window.draw(clitem3);

				if (coin_dissapear_3 > 0) coin_dissapear_3--;
				else if (coin_dissapear_3 <= 0)
				{
					coin_spawn_3 = 100;
					coin_dissapear_3 = 100;
				}
			}
			//coin 4
			if (coin_spawn_4 > 0)
			{
				clitem4.setPosition(coincl_4_x - 1000, coincl_4_y - 1000);
				coin_spawn_4--;
			}
			else if (coin_spawn_4 <= 0)
			{
				clitem4.setPosition(coincl_4_x, coincl_4_y);
				window.draw(clitem4);

				if (coin_dissapear_4 > 0) coin_dissapear_4--;
				else if (coin_dissapear_4 <= 0)
				{
					coin_spawn_4 = 100;
					coin_dissapear_4 = 100;
				}
			}
			//coin 5
			if (coin_spawn_5 > 0)
			{
				clitem5.setPosition(coincl_5_x - 1000, coincl_5_y - 10000);
				coin_spawn_5--;
			}
			else if (coin_spawn_5 <= 0)
			{
				clitem5.setPosition(coincl_5_x, coincl_5_y);
				window.draw(clitem5);

				if (coin_dissapear_5 > 0) coin_dissapear_5--;
				else if (coin_dissapear_5 <= 0)
				{
					coin_spawn_5 = 100;
					coin_dissapear_5 = 100;
				}
			}
			//gold 1
			if (gold_spawn > 0)
			{
				gold1.setPosition(gold_x - 1000, gold_y - 1000);
				gold_spawn--;
			}
			else if (gold_spawn <= 0)
			{
				gold1.setPosition(gold_x, gold_y);
				window.draw(gold1);

				if (gold_dissapear > 0) gold_dissapear--;
				else if (gold_dissapear <= 0)
				{
					gold_spawn = 100;
					gold_dissapear = 100;
				}

			}
			//gold 2
			if (gold_spawn1 > 0)
			{
				gold2.setPosition(gold1_x - 1000, gold1_y - 1000);
				gold_spawn1--;
			}
			else if (gold_spawn1 <= 0)
			{
				gold2.setPosition(gold1_x, gold1_y);
				window.draw(gold2);

				if (gold_dissapear1 > 0) gold_dissapear1--;
				else if (gold_dissapear1 <= 0)
				{
					gold_spawn1 = 100;
					gold_dissapear1 = 100;
				}

			}
			//gold 3
			if (gold_spawn2 > 0)
			{
				gold3.setPosition(gold2_x - 1000, gold2_y - 1000);
				gold_spawn2--;
			}
			else if (gold_spawn2 <= 0)
			{
				gold3.setPosition(gold2_x, gold2_y);
				window.draw(gold3);

				if (gold_dissapear2 > 0) gold_dissapear2--;
				else if (gold_dissapear2 <= 0)
				{
					gold_spawn2 = 100;
					gold_dissapear2 = 100;
				}

			}

		}

		window.draw(coin1);
		window.draw(coin2);
		window.draw(coin3);
		window.draw(coin4);
		window.draw(coin5);
		window.draw(coin6);
		window.draw(coin7);
		window.draw(coin8);
		window.draw(coin9);
		window.draw(coin10);
		window.draw(coin11);
		window.draw(coin12);

		/*window.draw(gold1);
		window.draw(gold2);
		window.draw(gold3);
		window.draw(clitem1);
		window.draw(clitem2);
		window.draw(clitem3);
		window.draw(clitem4);
		window.draw(clitem5);*/
		//window.draw(win1);

		window.draw(items);
		window.draw(items2);
		//window.draw(items3);
		window.draw(items4);
		window.draw(namedisplay);
		window.draw(moya);
		window.draw(monster);
		window.draw(lblScore);
		window.draw(name);
		window.draw(pacmoya);
		//window.draw(welcome2);
		window.draw(welcome3);

		// แสดงผลชื่อที่พิมพ์ได้
		if (isMoyaAlive && is_enter_name)
		{
			window.draw(namename1);
			window.draw(entername);
			

		}
		if (isMoyaAlive == false)
		{
			window.draw(gameover1);
			window.draw(welcome2);
			window.draw(welcome3);
			window.draw(showscore);
			window.draw(restart);
			window.draw(showname);
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				if (restart.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))
				{
					isMoyaAlive = true;
					moya_x = 7;//110;
					moya_y = 126;//210;
					monster_x = 722;//520; 97
					monster_y = 451;
					step_index = -1;
					score = 0;
					ssScore.str(" ");
					ssScore << "Score: " << score;
					lblScore.setString(ssScore.str());
					coin1_x = 288; 
					coin1_y = 373;
					coin2_x = 345;
					coin2_y = 375;
					coin3_x = 421;
					coin3_y = 375;
					coin4_x = 467;
					coin4_y = 375;
					coin5_x = Coin5_x;
					coin5_y = 331;
					coin6_x = 285;
					coin6_y = 331;
					coin7_x = 285;
					coin7_y = 240;
					coin8_x = 285;
					coin8_y = 193;
					coin9_x = 467;
					coin9_y = 196;
					coin10_x = 335;
					coin10_y = 196;
					coin11_x = 420;
					coin11_y = 196;
					coin12_x = 467;
					coin12_y = 240;
					item1_x = 187;
					item1_y = 96;
					item2_x = 720;
					item2_y = 106;
					item3_x = 7;
					item3_y = 126;
					item4_x = 7;
					item4_y = 451;
					 ///////////////////////////////////////////////////////////////////////////
					gold_x = 722;
					gold_y = 451;
					gold1_x = 97;
					gold1_y = 271;
					gold2_x = 362;
					gold2_y = 171;
					
				}
			}
			if (restart.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))
			{
				restart.setFillColor(sf::Color::Red);
				restart.setStyle(sf::Text::Underlined);
			}
			else
			{
				restart.setFillColor(sf::Color::White);
			}
			
		}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////moya get items and monster stop walk///////////////////////////////////////////////////////////////

		if (abs(moya_x - monster_x)<20 && abs(moya_y - monster_y) < 20)
		{
			isMoyaAlive = false;
			showscore.setString(to_string(score));
			showname.setString(enter_name);
			monster_x = monster_y = -999;
			scorelist.addEntry(enter_name, score);
			//enter_name = "";

			//window.draw(scoretext);
		}
		if (abs(moya_x - coin1_x) < 30 && abs(moya_y - coin1_y) < 30)
		{
			std::cout << "Picked item 1 " << std::endl;
			coin1_x = coin1_y = -1000;
			score = score + 5;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coin2_x) < 30 && abs(moya_y - coin2_y) < 30)
		{
			std::cout << "Picked item 2 " << std::endl;
			coin2_x = coin2_y = -1000;
			score = score + 5;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coin3_x) < 30 && abs(moya_y - coin3_y) < 30)
		{
			std::cout << "Picked item 3 " << std::endl;
			coin3_x = coin3_y = -1000;
			score = score + 5;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coin4_x) < 30 && abs(moya_y - coin4_y) < 30)
		{
			std::cout << "Picked item 4 " << std::endl;
			coin4_x = coin4_y = -1000;
			score = score + 5;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coin5_x) < 30 && abs(moya_y - coin5_y) < 30)
		{
			std::cout << "Picked item 5 " << std::endl;
			coin5_x = coin5_y = -1000;
			score = score + 5;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coin6_x) < 30 && abs(moya_y - coin6_y) < 30)
		{
			std::cout << "Picked item 6 " << std::endl;
			coin6_x = coin6_y = -1000;
			score = score + 5;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coin7_x) < 30 && abs(moya_y - coin7_y) < 30)
		{
			std::cout << "Picked item 7 " << std::endl;
			coin7_x = coin7_y = -1000;
			score = score + 5;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coin8_x) < 30 && abs(moya_y - coin8_y) < 30)
		{
			std::cout << "Picked item 8 " << std::endl;
			coin8_x = coin8_y = -1000;
			score = score + 5;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coin9_x) < 30 && abs(moya_y - coin9_y) < 30)
		{
			std::cout << "Picked item 9 " << std::endl;
			coin9_x = coin9_y = -1000;
			score = score + 5;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coin10_x) < 30 && abs(moya_y - coin10_y) < 30)
		{
			std::cout << "Picked item 10 " << std::endl;
			coin10_x = coin10_y = -1000;
			score = score + 5;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coin11_x) < 30 && abs(moya_y - coin11_y) < 30)
		{
			std::cout << "Picked item 11 " << std::endl;
			coin11_x = coin11_y = -1000;
			score = score + 5;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coin12_x) < 30 && abs(moya_y - coin12_y) < 30)
		{
			std::cout << "Picked item 12 " << std::endl;
			coin12_x = coin12_y = -1000;
			score = score + 5;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coincl_1_x) < 50 && abs(moya_y - coincl_1_y) < 30 && coin_spawn_1 <= 0)
		{
			std::cout << "Picked itemcl 1 " << std::endl;
			position_index = rand() % Path_size;
			coincl_1_x = Path[position_index][0];
			coincl_1_y = Path[position_index][1];
			score = score + 20;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coincl_2_x) < 50 && abs(moya_y - coincl_2_y) < 30 && coin_spawn_2 <= 0)
		{
			std::cout << "Picked itemcl 2 " << std::endl;
			position_index = rand() % Path_size;
			coincl_2_x = Path[position_index][0];
			coincl_2_y = Path[position_index][1];
			score = score + 20;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coincl_3_x) < 30 && abs(moya_y - coincl_3_y) < 30 && coin_spawn_3 <= 0)
		{
			std::cout << "Picked itemcl 3 " << std::endl;
			position_index = rand() % Path_size;
			coincl_3_x = Path[position_index][0];
			coincl_3_y = Path[position_index][1];
			score = score + 20;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coincl_4_x) < 30 && abs(moya_y - coincl_4_y) < 30 && coin_spawn_4 <= 0)
		{
			std::cout << "Picked itemcl 4 " << std::endl;
			position_index = rand() % Path_size;
			coincl_4_x = Path[position_index][0];
			coincl_4_y = Path[position_index][1];
			score = score + 20;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - coincl_5_x) < 30 && abs(moya_y - coincl_5_y) < 30 && coin_spawn_5 <= 0)
		{
			std::cout << "Picked itemcl 5 " << std::endl;
			position_index = rand() % Path_size;
			coincl_5_x = Path[position_index][0];
			coincl_5_y = Path[position_index][1];
			score = score + 20;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - gold_x) < 30 && abs(moya_y - gold_y) < 30 && gold_spawn <= 0)
		{
			std::cout << "Picked itemgold 6 " << std::endl;
			gold_x = gold_y = -1000;
			score = score + 50;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - gold1_x) < 30 && abs(moya_y - gold1_y) < 30 && gold_spawn1 <= 0)
		{
			std::cout << "Picked itemgold 7 " << std::endl;
			gold1_x = gold1_y = -1000;
			score = score + 50;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - gold2_x) < 30 && abs(moya_y - gold2_y) < 30 && gold_spawn2 <= 0)
		{
			std::cout << "Picked itemgold 8 " << std::endl;
			gold2_x = gold2_y = -1000;
			score = score + 50;
			ssScore.str(" ");
			ssScore << "Score: " << score;
			lblScore.setString(ssScore.str());
		}
		else if (abs(moya_x - item1_x) < 30 && abs(moya_y - item1_y) < 30)
		{
			std::cout << "Picked itemclock 1 " << std::endl;
			item1_x = item1_y = -1000;
			monster_freeze = 100;
		}
		else if (abs(moya_x - item2_x) < 30 && abs(moya_y - item2_y) < 30)
		{
			std::cout << "Picked itemclock 2 " << std::endl;
			item2_x = item2_y = -1000;
			monster_freeze = 100;
		}
		else if (abs(moya_x - item4_x) < 30 && abs(moya_y - item4_y) < 30)
		{
			std::cout << "Picked itemclock 2 " << std::endl;
			item4_x = item4_y = -1000;
			monster_freeze = 100;
		}
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		if (is_scoreboardshow == true)
		{

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				if (back.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))
				{
					is_scoreboardshow = false;
				}
			}
			if (back.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))
			{
				back.setFillColor(sf::Color::Red);
				back.setStyle(sf::Text::Underlined);
			}
			else
			{
				back.setFillColor(sf::Color::White);
			}
				window.draw(scoreborad);
				window.draw(back);
				window.draw(welcome3);
				Text highscore;
				highscore.setCharacterSize(30);
				highscore.setFont(xscore);
				for (int i = 0; i < scorelist.get().size(); i++) {

					highscore.setPosition(200, 160 + (i * 40));
					highscore.setString(scorelist.get().at(i).getName());
					window.draw(highscore);
				}
				for (int i = 0; i < scorelist.get().size(); i++) {

					highscore.setPosition(560, 160 + (i * 40));
					highscore.setString(to_string(scorelist.get().at(i).getScore()));
					window.draw(highscore);
				}
			}
			window.display();
			sf::sleep(sf::milliseconds(50));

		}
		scorelist.saveFile();
		return 0;
	}



