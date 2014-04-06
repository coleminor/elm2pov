//
// Copyright 2013 Cole Minor <c.minor@inbox.com>
//
//    This file is part of mask2rects.
//
//    mask2rects is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    mask2rects is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with mask2rects.  If not, see <http://www.gnu.org/licenses/>.
//
#ifndef MASK2RECTS_LABEL_HPP
#define MASK2RECTS_LABEL_HPP

class Label;

class Label {
private:
  Label *m_root;
  int m_rank;
  int m_value;

public:
  Label(int value);

  int value() const { return m_value; }
  Label *root();
  void join(Label *other);
};

#endif // MASK2RECTS_LABEL_HPP
