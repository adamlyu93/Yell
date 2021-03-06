/*
 Copyright Arkadiy Simonov, Thomas Weber, ETH Zurich 2014
 
 This file is part of Yell.
 
 Yell is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 Yell is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with Yell.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "basic_io.h"
#include <string>
#include <fstream>

bool file_exists(string fname)
{
  ifstream ifile(fname.c_str());
  return ifile.good();
}

string read_input_file(string filename)
{
  string buf;
  string line;
  ifstream in(filename.c_str());
  while(getline(in,line))
    buf += line + "\n";
  
  return buf;
}