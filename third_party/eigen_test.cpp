/*
 * Copyright 2025 Ruiqi Chen (rchensix at alumni dot stanford dot edu)
 * 
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Affero General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License
 * for more details.
 * 
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

#include <Eigen/Dense>
#include <gtest/gtest.h>

TEST(Eigen, VerifyCompileAndRun) {
  Eigen::Matrix2d m;
  m << 1, 2,
       3, 4;
  const double det = m.determinant();
  const double det_expected = 1.0 * 4.0 - 2.0 * 3.0;
  EXPECT_DOUBLE_EQ(det, det_expected);
}
