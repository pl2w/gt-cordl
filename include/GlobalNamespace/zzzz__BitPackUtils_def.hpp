#pragma once
// IWYU pragma private; include "GlobalNamespace/BitPackUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BitPackUtils)
namespace GlobalNamespace {
struct BitPackUtils_QAxis;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BitPackUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BitPackUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitPackUtils*, "", "BitPackUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BitPackUtils
class CORDL_TYPE BitPackUtils : public ::System::Object {
public:
// Declarations
using QAxis = ::GlobalNamespace::BitPackUtils_QAxis;

/// @brief Field kRadialLogLUT, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kRadialLogLUT, put=setStaticF_kRadialLogLUT)) ::ArrayW<float_t>  kRadialLogLUT;

/// @brief Method GetParityForAxis, addr 0x5ae3a34, size 0xa8, virtual false, abstract: false, final false
static inline int32_t GetParityForAxis(float_t  axisPos) ;

/// @brief Method GetParityForWorldPos, addr 0x5ae367c, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3Int GetParityForWorldPos(::UnityEngine::Vector3  worldPos) ;

/// @brief Method GetParityOffset, addr 0x5ae39b0, size 0x84, virtual false, abstract: false, final false
static inline float_t GetParityOffset(float_t  anchorAxisPos, int32_t  anchorParity, int32_t  incomingParity) ;

/// @brief Method PackAnchoredPosRotForNetwork, addr 0x5ae32ec, size 0x390, virtual false, abstract: false, final false
static inline int64_t PackAnchoredPosRotForNetwork(::UnityEngine::Vector3  worldPos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method PackColorForNetwork, addr 0x5ae3dc4, size 0x258, virtual false, abstract: false, final false
static inline int16_t PackColorForNetwork(::UnityEngine::Color  col) ;

/// @brief Method PackHandPosRotForNetwork, addr 0x5ae2f30, size 0x304, virtual false, abstract: false, final false
static inline int64_t PackHandPosRotForNetwork(::UnityEngine::Vector3  localPos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method PackIntsIntoLong, addr 0x5ae4084, size 0xc, virtual false, abstract: false, final false
static inline int64_t PackIntsIntoLong(int32_t  value1, int32_t  value2) ;

/// @brief Method PackQuaternionForNetwork, addr 0x5ae2aa4, size 0x3f8, virtual false, abstract: false, final false
static inline int32_t PackQuaternionForNetwork(::UnityEngine::Quaternion  q) ;

/// @brief Method PackRelativePos, addr 0x5ae2540, size 0xc0, virtual false, abstract: false, final false
static inline uint32_t PackRelativePos(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max) ;

/// @brief Method PackRelativePos16, addr 0x5ae1fb8, size 0x414, virtual false, abstract: false, final false
static inline uint16_t PackRelativePos16(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  center, float_t  radius) ;

/// @brief Method PackRotation, addr 0x5ae2668, size 0x214, virtual false, abstract: false, final false
static inline uint32_t PackRotation(::UnityEngine::Quaternion  q, bool  normalize) ;

/// @brief Method PackWorldPosForNetwork, addr 0x5ae3adc, size 0x298, virtual false, abstract: false, final false
static inline int64_t PackWorldPosForNetwork(::UnityEngine::Vector3  worldPos) ;

/// @brief Method UnpackAnchoredPosRotForNetwork, addr 0x5ae3714, size 0x29c, virtual false, abstract: false, final false
static inline void UnpackAnchoredPosRotForNetwork(int64_t  packed, ::UnityEngine::Vector3  anchorPos, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot) ;

/// @brief Method UnpackColorFromNetwork, addr 0x5ae401c, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Color UnpackColorFromNetwork(int16_t  data) ;

/// @brief Method UnpackHandPosRotFromNetwork, addr 0x5ae3234, size 0xb8, virtual false, abstract: false, final false
static inline void UnpackHandPosRotFromNetwork(int64_t  data, ::by_ref<::UnityEngine::Vector3>  localPos, ::by_ref<::UnityEngine::Quaternion>  handRot) ;

/// @brief Method UnpackIntsFromLong, addr 0x5ae409c, size 0x6c, virtual false, abstract: false, final false
static inline void UnpackIntsFromLong(int64_t  value, ::by_ref<int32_t>  value1, ::by_ref<int32_t>  value2) ;

/// @brief Method UnpackQuaternionFromNetwork, addr 0x5ae2e9c, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion UnpackQuaternionFromNetwork(int32_t  data) ;

/// @brief Method UnpackRelativePos, addr 0x5ae2600, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 UnpackRelativePos(uint32_t  data, ::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max) ;

/// @brief Method UnpackRelativePos16, addr 0x5ae23cc, size 0x174, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 UnpackRelativePos16(uint16_t  data, ::UnityEngine::Vector3  center, float_t  radius, bool  snapToRadius) ;

/// @brief Method UnpackRotation, addr 0x5ae287c, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion UnpackRotation(uint32_t  data) ;

/// @brief Method UnpackValue1FromLong, addr 0x5ae4090, size 0x4, virtual false, abstract: false, final false
static inline int32_t UnpackValue1FromLong(int64_t  value) ;

/// @brief Method UnpackValue2FromLong, addr 0x5ae4094, size 0x8, virtual false, abstract: false, final false
static inline int32_t UnpackValue2FromLong(int64_t  value) ;

/// @brief Method UnpackWorldPosFromNetwork, addr 0x5ae3d74, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 UnpackWorldPosFromNetwork(int64_t  data) ;

static inline ::ArrayW<float_t> getStaticF_kRadialLogLUT() ;

static inline void setStaticF_kRadialLogLUT(::ArrayW<float_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitPackUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitPackUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BitPackUtils(BitPackUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitPackUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitPackUtils(BitPackUtils const& ) = delete;

/// @brief Field QPackInvScale offset 0xffffffff size 0x4
static constexpr float_t  QPackInvScale{static_cast<float_t>(0.0027675421f)};

/// @brief Field QPackMax offset 0xffffffff size 0x4
static constexpr float_t  QPackMax{static_cast<float_t>(0.707107f)};

/// @brief Field QPackScale offset 0xffffffff size 0x4
static constexpr float_t  QPackScale{static_cast<float_t>(361.33145f)};

/// @brief Field STEP_1023 offset 0xffffffff size 0x4
static constexpr float_t  STEP_1023{static_cast<float_t>(0.0009775171f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3474};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BitPackUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
