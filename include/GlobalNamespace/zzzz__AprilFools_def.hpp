#pragma once
// IWYU pragma private; include "GlobalNamespace/AprilFools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AprilFools)
// Forward declare root types
namespace GlobalNamespace {
class AprilFools;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AprilFools*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AprilFools*, "", "AprilFools");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AprilFools
class CORDL_TYPE AprilFools : public ::System::Object {
public:
// Declarations
/// @brief Method GenerateSmoothTarget, addr 0x5e072fc, size 0x1a4, virtual false, abstract: false, final false
static inline float_t GenerateSmoothTarget(::StringW  username, ::StringW  roomName, ::StringW  areaName) ;

/// @brief Method GenerateTarget, addr 0x5e06ee8, size 0x21c, virtual false, abstract: false, final false
static inline float_t GenerateTarget(::StringW  username, ::StringW  roomName, ::StringW  areaName, int32_t  startTime) ;

/// @brief Method Slerp, addr 0x5e07104, size 0x16c, virtual false, abstract: false, final false
static inline float_t Slerp(float_t  a, float_t  b, float_t  t) ;

/// @brief Method SmoothSlerp, addr 0x5e07270, size 0x8c, virtual false, abstract: false, final false
static inline float_t SmoothSlerp(float_t  a, float_t  b, float_t  t) ;

/// @brief Method mod, addr 0x5e06ed0, size 0x18, virtual false, abstract: false, final false
static inline int32_t mod(int32_t  x, int32_t  m) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AprilFools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AprilFools", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AprilFools(AprilFools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AprilFools", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AprilFools(AprilFools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{532};

/// @brief Field changeIntervalSeconds offset 0xffffffff size 0x4
static constexpr int32_t  changeIntervalSeconds{static_cast<int32_t>(0x12c)};

/// @brief Field excludeRangeEnd offset 0xffffffff size 0x4
static constexpr float_t  excludeRangeEnd{static_cast<float_t>(1.25f)};

/// @brief Field excludeRangeStart offset 0xffffffff size 0x4
static constexpr float_t  excludeRangeStart{static_cast<float_t>(0.75f)};

/// @brief Field lerpIntervalSeconds offset 0xffffffff size 0x4
static constexpr int32_t  lerpIntervalSeconds{static_cast<int32_t>(0x78)};

/// @brief Field maxRange offset 0xffffffff size 0x4
static constexpr float_t  maxRange{static_cast<float_t>(2.0f)};

/// @brief Field minRange offset 0xffffffff size 0x4
static constexpr float_t  minRange{static_cast<float_t>(0.5f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AprilFools) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
