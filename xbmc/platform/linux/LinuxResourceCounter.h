#pragma once

/*
 *      Copyright (C) 2005-2015 Team Kodi
 *      http://kodi.tv
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Kodi; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include <sys/time.h>
#include <sys/times.h>
#include <sys/resource.h>

#include <time.h>

class CLinuxResourceCounter
{
public:
  CLinuxResourceCounter();
  virtual ~CLinuxResourceCounter();

  double GetCPUUsage();
  void   Reset();

protected:
  struct rusage  m_usage;
  struct timeval m_tmLastCheck;
  double m_dLastUsage;
};
