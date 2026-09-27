#pragma once
// IWYU pragma private; include "GlobalNamespace/AdvancedItemState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdvancedItemState_PointType_def.hpp"
#include "GlobalNamespace/zzzz__LimitAxis_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AdvancedItemState)
namespace GlobalNamespace {
struct AdvancedItemState_PointType;
}
namespace GlobalNamespace {
class AdvancedItemState_PreData;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
struct ValueTuple_4;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class AdvancedItemState;
}
namespace GlobalNamespace {
class AdvancedItemState_PreData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AdvancedItemState*);
MARK_REF_T(::GlobalNamespace::AdvancedItemState_PreData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AdvancedItemState*, "", "AdvancedItemState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AdvancedItemState_PreData*, "", "AdvancedItemState/PreData");
// Dependencies LimitAxis, System.Object, UnityEngine.Quaternion, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: AdvancedItemState
class CORDL_TYPE AdvancedItemState : public ::System::Object {
public:
// Declarations
using PointType = ::GlobalNamespace::AdvancedItemState_PointType;

using PreData = ::GlobalNamespace::AdvancedItemState_PreData;

 __declspec(property(get=get_EncodedDeltaRotation)) float_t  EncodedDeltaRotation;

/// @brief Field _encodedValue, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__encodedValue, put=__cordl_internal_set__encodedValue)) int32_t  _encodedValue;

/// @brief Field angle, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_angle, put=__cordl_internal_set_angle)) float_t  angle;

/// @brief Field angleVectorWhereUpIsStandard, offset 0x14, size 0x8 
 __declspec(property(get=__cordl_internal_get_angleVectorWhereUpIsStandard, put=__cordl_internal_set_angleVectorWhereUpIsStandard)) ::UnityEngine::Vector2  angleVectorWhereUpIsStandard;

/// @brief Field deltaRotation, offset 0x1c, size 0x10 
 __declspec(property(get=__cordl_internal_get_deltaRotation, put=__cordl_internal_set_deltaRotation)) ::UnityEngine::Quaternion  deltaRotation;

/// @brief Field index, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field limitAxis, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_limitAxis, put=__cordl_internal_set_limitAxis)) ::GlobalNamespace::LimitAxis  limitAxis;

/// @brief Field preData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_preData, put=__cordl_internal_set_preData)) ::GlobalNamespace::AdvancedItemState_PreData*  preData;

/// @brief Field reverseGrip, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_reverseGrip, put=__cordl_internal_set_reverseGrip)) bool  reverseGrip;

/// @brief Method Decode, addr 0x5767a1c, size 0x5c, virtual false, abstract: false, final false
inline void Decode() ;

/// @brief Method DecodeAdvancedItemState, addr 0x5767ccc, size 0x8c, virtual false, abstract: false, final false
inline ::System::ValueTuple_4<int32_t,float_t,float_t,float_t> DecodeAdvancedItemState(int32_t  encodedValue) ;

/// @brief Method DecodeData, addr 0x5767a78, size 0x188, virtual false, abstract: false, final false
inline ::GlobalNamespace::AdvancedItemState* DecodeData(int32_t  encoded) ;

/// @brief Method DecodeDeltaRotation, addr 0x5767da0, size 0x14c, virtual false, abstract: false, final false
inline void DecodeDeltaRotation(float_t  encodedDelta, bool  isFlipped) ;

/// @brief Method Encode, addr 0x5767838, size 0x18, virtual false, abstract: false, final false
inline void Encode() ;

/// @brief Method EncodeData, addr 0x5767850, size 0x1cc, virtual false, abstract: false, final false
inline int32_t EncodeData() ;

/// @brief Method GetEncodedDeltaRotation, addr 0x5767d7c, size 0x24, virtual false, abstract: false, final false
inline float_t GetEncodedDeltaRotation() ;

/// @brief Method GetQuaternion, addr 0x5767c00, size 0xcc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetQuaternion() ;

static inline ::GlobalNamespace::AdvancedItemState* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__encodedValue() const;

constexpr int32_t& __cordl_internal_get__encodedValue() ;

constexpr float_t const& __cordl_internal_get_angle() const;

constexpr float_t& __cordl_internal_get_angle() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_angleVectorWhereUpIsStandard() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_angleVectorWhereUpIsStandard() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_deltaRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_deltaRotation() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr ::GlobalNamespace::LimitAxis const& __cordl_internal_get_limitAxis() const;

constexpr ::GlobalNamespace::LimitAxis& __cordl_internal_get_limitAxis() ;

constexpr ::GlobalNamespace::AdvancedItemState_PreData* const& __cordl_internal_get_preData() const;

constexpr ::GlobalNamespace::AdvancedItemState_PreData*& __cordl_internal_get_preData() ;

constexpr bool const& __cordl_internal_get_reverseGrip() const;

constexpr bool& __cordl_internal_get_reverseGrip() ;

constexpr void __cordl_internal_set__encodedValue(int32_t  value) ;

constexpr void __cordl_internal_set_angle(float_t  value) ;

constexpr void __cordl_internal_set_angleVectorWhereUpIsStandard(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_deltaRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_limitAxis(::GlobalNamespace::LimitAxis  value) ;

constexpr void __cordl_internal_set_preData(::GlobalNamespace::AdvancedItemState_PreData*  value) ;

constexpr void __cordl_internal_set_reverseGrip(bool  value) ;

/// @brief Method .ctor, addr 0x5767eec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EncodedDeltaRotation, addr 0x5767d58, size 0x24, virtual false, abstract: false, final false
inline float_t get_EncodedDeltaRotation() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdvancedItemState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdvancedItemState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdvancedItemState(AdvancedItemState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdvancedItemState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdvancedItemState(AdvancedItemState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1352};

/// @brief Field _encodedValue, offset: 0x10, size: 0x4, def value: None
 int32_t  ____encodedValue;

/// @brief Field angleVectorWhereUpIsStandard, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___angleVectorWhereUpIsStandard;

/// @brief Field deltaRotation, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___deltaRotation;

/// @brief Field index, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field preData, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::AdvancedItemState_PreData*  ___preData;

/// @brief Field limitAxis, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::LimitAxis  ___limitAxis;

/// @brief Field reverseGrip, offset: 0x3c, size: 0x1, def value: None
 bool  ___reverseGrip;

/// @brief Field angle, offset: 0x40, size: 0x4, def value: None
 float_t  ___angle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AdvancedItemState, ____encodedValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdvancedItemState, ___angleVectorWhereUpIsStandard) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdvancedItemState, ___deltaRotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdvancedItemState, ___index) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdvancedItemState, ___preData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdvancedItemState, ___limitAxis) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdvancedItemState, ___reverseGrip) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdvancedItemState, ___angle) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AdvancedItemState) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AdvancedItemState::PointType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AdvancedItemState/PreData
class CORDL_TYPE AdvancedItemState_PreData : public ::System::Object {
public:
// Declarations
/// @brief Field distAlongLine, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_distAlongLine, put=__cordl_internal_set_distAlongLine)) float_t  distAlongLine;

/// @brief Field pointType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_pointType, put=__cordl_internal_set_pointType)) ::GlobalNamespace::AdvancedItemState_PointType  pointType;

static inline ::GlobalNamespace::AdvancedItemState_PreData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_distAlongLine() const;

constexpr float_t& __cordl_internal_get_distAlongLine() ;

constexpr ::GlobalNamespace::AdvancedItemState_PointType const& __cordl_internal_get_pointType() const;

constexpr ::GlobalNamespace::AdvancedItemState_PointType& __cordl_internal_get_pointType() ;

constexpr void __cordl_internal_set_distAlongLine(float_t  value) ;

constexpr void __cordl_internal_set_pointType(::GlobalNamespace::AdvancedItemState_PointType  value) ;

/// @brief Method .ctor, addr 0x5767ef4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdvancedItemState_PreData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdvancedItemState_PreData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdvancedItemState_PreData(AdvancedItemState_PreData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdvancedItemState_PreData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdvancedItemState_PreData(AdvancedItemState_PreData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1350};

/// @brief Field distAlongLine, offset: 0x10, size: 0x4, def value: None
 float_t  ___distAlongLine;

/// @brief Field pointType, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::AdvancedItemState_PointType  ___pointType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AdvancedItemState_PreData, ___distAlongLine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdvancedItemState_PreData, ___pointType) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AdvancedItemState_PreData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
