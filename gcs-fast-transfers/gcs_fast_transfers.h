// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GCS_FAST_TRANSFERS_GCS_FAST_TRANSFERS_H
#define GCS_FAST_TRANSFERS_GCS_FAST_TRANSFERS_H

#include <string>
#include <cstdint>
#include <utility>

namespace gcs_fast_transfers {

// Format a size in human readable terms
std::string format_size(std::int64_t size);

// Get the size and crc32c checksum of a file
std::pair<std::int64_t, std::string> file_info(std::string const& filename);

auto constexpr kKiB = std::int64_t(1024);
auto constexpr kMiB = 1024 * kKiB;
auto constexpr kGiB = 1024 * kMiB;
auto constexpr kTiB = 1024 * kGiB;
auto constexpr kPiB = 1024 * kTiB;

}  // gcs_fast_transfers

#endif  // GCS_FAST_TRANSFERS_GCS_FAST_TRANSFERS_H
