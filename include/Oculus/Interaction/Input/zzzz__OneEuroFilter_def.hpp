#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OneEuroFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__IOneEuroFilter_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__OneEuroFilterPropertyBlock_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OneEuroFilter)
namespace Oculus::Interaction::Input {
template<typename TData>
class IOneEuroFilter_1;
}
namespace Oculus::Interaction::Input {
struct OneEuroFilterPropertyBlock;
}
namespace Oculus::Interaction::Input {
class OneEuroFilter_LowPassFilter;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class OneEuroFilter_OneEuroFilterMulti_1;
}
namespace Oculus::Interaction::Input {
class OneEuroFilter___c;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class OneEuroFilter;
}
namespace Oculus::Interaction::Input {
class OneEuroFilter_LowPassFilter;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class OneEuroFilter_OneEuroFilterMulti_1;
}
namespace Oculus::Interaction::Input {
class OneEuroFilter___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::OneEuroFilter*);
MARK_REF_T(::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1);
MARK_REF_T(::Oculus::Interaction::Input::OneEuroFilter___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::OneEuroFilter*, "Oculus.Interaction.Input", "OneEuroFilter");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*, "Oculus.Interaction.Input", "OneEuroFilter/LowPassFilter");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1, "Oculus.Interaction.Input", "OneEuroFilter/OneEuroFilterMulti`1");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::OneEuroFilter___c*, "Oculus.Interaction.Input", "OneEuroFilter/<>c");
// Dependencies Oculus.Interaction.Input.OneEuroFilterPropertyBlock, System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.OneEuroFilter
class CORDL_TYPE OneEuroFilter : public ::System::Object {
public:
// Declarations
using LowPassFilter = ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter;

template<typename TData>
using OneEuroFilterMulti_1 = ::Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>;

using __c = ::Oculus::Interaction::Input::OneEuroFilter___c;

 __declspec(property(get=get_Value, put=set_Value)) float_t  Value;

/// @brief Field <Value>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) float_t  _Value_k__BackingField;

/// @brief Field _dxfilt, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__dxfilt, put=__cordl_internal_set__dxfilt)) ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*  _dxfilt;

/// @brief Field _isFirstUpdate, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFirstUpdate, put=__cordl_internal_set__isFirstUpdate)) bool  _isFirstUpdate;

/// @brief Field _properties, offset 0x14, size 0xc 
 __declspec(property(get=__cordl_internal_get__properties, put=__cordl_internal_set__properties)) ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  _properties;

/// @brief Field _xfilt, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__xfilt, put=__cordl_internal_set__xfilt)) ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*  _xfilt;

/// @brief Convert operator to "::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>"
constexpr operator  ::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>*() noexcept;

/// @brief Method CreateFloat, addr 0xa513d38, size 0x50, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>* CreateFloat() ;

/// @brief Method CreatePose, addr 0xa514468, size 0x1b8, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Pose>* CreatePose() ;

/// @brief Method CreateQuaternion, addr 0xa5142b0, size 0x1b8, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>* CreateQuaternion() ;

/// @brief Method CreateVector2, addr 0xa513d88, size 0x1b8, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector2>* CreateVector2() ;

/// @brief Method CreateVector3, addr 0xa513f40, size 0x1b8, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>* CreateVector3() ;

/// @brief Method CreateVector4, addr 0xa5140f8, size 0x1b8, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector4>* CreateVector4() ;

/// @brief Method GetAlpha, addr 0xa513c8c, size 0x28, virtual false, abstract: false, final false
inline float_t GetAlpha(float_t  rate, float_t  cutoff) ;

static inline ::Oculus::Interaction::Input::OneEuroFilter* New_ctor() ;

/// @brief Method Oculus.Interaction.Input.IOneEuroFilter<System.Single>.SetProperties, addr 0xa514620, size 0x14, virtual true, abstract: false, final true
inline void Oculus_Interaction_Input_IOneEuroFilter_System_Single__SetProperties(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>  properties) ;

/// @brief Method Reset, addr 0xa513cec, size 0x3c, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method SetProperties, addr 0xa513b6c, size 0x14, virtual false, abstract: false, final false
inline void SetProperties(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>  properties) ;

/// @brief Method Step, addr 0xa513b80, size 0x10c, virtual true, abstract: false, final true
inline float_t Step(float_t  newValue, float_t  deltaTime) ;

constexpr float_t const& __cordl_internal_get__Value_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Value_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter* const& __cordl_internal_get__dxfilt() const;

constexpr ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*& __cordl_internal_get__dxfilt() ;

constexpr bool const& __cordl_internal_get__isFirstUpdate() const;

constexpr bool& __cordl_internal_get__isFirstUpdate() ;

constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock const& __cordl_internal_get__properties() const;

constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& __cordl_internal_get__properties() ;

constexpr ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter* const& __cordl_internal_get__xfilt() const;

constexpr ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*& __cordl_internal_get__xfilt() ;

constexpr void __cordl_internal_set__Value_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__dxfilt(::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*  value) ;

constexpr void __cordl_internal_set__isFirstUpdate(bool  value) ;

constexpr void __cordl_internal_set__properties(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  value) ;

constexpr void __cordl_internal_set__xfilt(::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*  value) ;

/// @brief Method .ctor, addr 0xa513a7c, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Value, addr 0xa513a6c, size 0x8, virtual true, abstract: false, final true
inline float_t get_Value() ;

/// @brief Convert to "::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>"
constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>* i___Oculus__Interaction__Input__IOneEuroFilter_1_float_t_() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Value, addr 0xa513a74, size 0x8, virtual false, abstract: false, final false
inline void set_Value(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneEuroFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneEuroFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OneEuroFilter(OneEuroFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneEuroFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneEuroFilter(OneEuroFilter const& ) = delete;

/// @brief Field _DEFAULT_FREQUENCY_HZ offset 0xffffffff size 0x4
static constexpr float_t  _DEFAULT_FREQUENCY_HZ{static_cast<float_t>(60.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16520};

/// [CompilerGenerated]
/// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x4, def value: None
 float_t  ____Value_k__BackingField;

/// @brief Field _properties, offset: 0x14, size: 0xc, def value: None
 ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  ____properties;

/// @brief Field _isFirstUpdate, offset: 0x20, size: 0x1, def value: None
 bool  ____isFirstUpdate;

/// @brief Field _xfilt, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*  ____xfilt;

/// @brief Field _dxfilt, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*  ____dxfilt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::OneEuroFilter, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OneEuroFilter, ____properties) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OneEuroFilter, ____isFirstUpdate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OneEuroFilter, ____xfilt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OneEuroFilter, ____dxfilt) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::OneEuroFilter) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.OneEuroFilter/<>c
class CORDL_TYPE OneEuroFilter___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Input::OneEuroFilter___c*  __9;

/// @brief Field <>9__16_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_0, put=setStaticF___9__16_0)) ::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector2>*  __9__16_0;

/// @brief Field <>9__16_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_1, put=setStaticF___9__16_1)) ::System::Func_3<::UnityEngine::Vector2,int32_t,float_t>*  __9__16_1;

/// @brief Field <>9__17_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_0, put=setStaticF___9__17_0)) ::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector3>*  __9__17_0;

/// @brief Field <>9__17_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_1, put=setStaticF___9__17_1)) ::System::Func_3<::UnityEngine::Vector3,int32_t,float_t>*  __9__17_1;

/// @brief Field <>9__18_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_0, put=setStaticF___9__18_0)) ::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector4>*  __9__18_0;

/// @brief Field <>9__18_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_1, put=setStaticF___9__18_1)) ::System::Func_3<::UnityEngine::Vector4,int32_t,float_t>*  __9__18_1;

/// @brief Field <>9__19_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_0, put=setStaticF___9__19_0)) ::System::Func_2<::ArrayW<float_t>,::UnityEngine::Quaternion>*  __9__19_0;

/// @brief Field <>9__19_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_1, put=setStaticF___9__19_1)) ::System::Func_3<::UnityEngine::Quaternion,int32_t,float_t>*  __9__19_1;

/// @brief Field <>9__20_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_0, put=setStaticF___9__20_0)) ::System::Func_2<::ArrayW<float_t>,::UnityEngine::Pose>*  __9__20_0;

/// @brief Field <>9__20_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_1, put=setStaticF___9__20_1)) ::System::Func_3<::UnityEngine::Pose,int32_t,float_t>*  __9__20_1;

static inline ::Oculus::Interaction::Input::OneEuroFilter___c* New_ctor() ;

/// @brief Method <CreatePose>b__20_0, addr 0xa514a28, size 0x154, virtual false, abstract: false, final false
inline ::UnityEngine::Pose _CreatePose_b__20_0(::ArrayW<float_t>  values) ;

/// @brief Method <CreatePose>b__20_1, addr 0xa514b7c, size 0x104, virtual false, abstract: false, final false
inline float_t _CreatePose_b__20_1(::UnityEngine::Pose  value, int32_t  index) ;

/// @brief Method <CreateQuaternion>b__19_0, addr 0xa5148a8, size 0xf8, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion _CreateQuaternion_b__19_0(::ArrayW<float_t>  values) ;

/// @brief Method <CreateQuaternion>b__19_1, addr 0xa5149a0, size 0x88, virtual false, abstract: false, final false
inline float_t _CreateQuaternion_b__19_1(::UnityEngine::Quaternion  value, int32_t  index) ;

/// @brief Method <CreateVector2>b__16_0, addr 0xa5146ac, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _CreateVector2_b__16_0(::ArrayW<float_t>  values) ;

/// @brief Method <CreateVector2>b__16_1, addr 0xa5146d8, size 0x60, virtual false, abstract: false, final false
inline float_t _CreateVector2_b__16_1(::UnityEngine::Vector2  value, int32_t  index) ;

/// @brief Method <CreateVector3>b__17_0, addr 0xa514738, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _CreateVector3_b__17_0(::ArrayW<float_t>  values) ;

/// @brief Method <CreateVector3>b__17_1, addr 0xa514770, size 0x70, virtual false, abstract: false, final false
inline float_t _CreateVector3_b__17_1(::UnityEngine::Vector3  value, int32_t  index) ;

/// @brief Method <CreateVector4>b__18_0, addr 0xa5147e0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 _CreateVector4_b__18_0(::ArrayW<float_t>  values) ;

/// @brief Method <CreateVector4>b__18_1, addr 0xa514820, size 0x88, virtual false, abstract: false, final false
inline float_t _CreateVector4_b__18_1(::UnityEngine::Vector4  value, int32_t  index) ;

/// @brief Method .ctor, addr 0xa5146a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Input::OneEuroFilter___c* getStaticF___9() ;

static inline ::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector2>* getStaticF___9__16_0() ;

static inline ::System::Func_3<::UnityEngine::Vector2,int32_t,float_t>* getStaticF___9__16_1() ;

static inline ::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector3>* getStaticF___9__17_0() ;

static inline ::System::Func_3<::UnityEngine::Vector3,int32_t,float_t>* getStaticF___9__17_1() ;

static inline ::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector4>* getStaticF___9__18_0() ;

static inline ::System::Func_3<::UnityEngine::Vector4,int32_t,float_t>* getStaticF___9__18_1() ;

static inline ::System::Func_2<::ArrayW<float_t>,::UnityEngine::Quaternion>* getStaticF___9__19_0() ;

static inline ::System::Func_3<::UnityEngine::Quaternion,int32_t,float_t>* getStaticF___9__19_1() ;

static inline ::System::Func_2<::ArrayW<float_t>,::UnityEngine::Pose>* getStaticF___9__20_0() ;

static inline ::System::Func_3<::UnityEngine::Pose,int32_t,float_t>* getStaticF___9__20_1() ;

static inline void setStaticF___9(::Oculus::Interaction::Input::OneEuroFilter___c*  value) ;

static inline void setStaticF___9__16_0(::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector2>*  value) ;

static inline void setStaticF___9__16_1(::System::Func_3<::UnityEngine::Vector2,int32_t,float_t>*  value) ;

static inline void setStaticF___9__17_0(::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector3>*  value) ;

static inline void setStaticF___9__17_1(::System::Func_3<::UnityEngine::Vector3,int32_t,float_t>*  value) ;

static inline void setStaticF___9__18_0(::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector4>*  value) ;

static inline void setStaticF___9__18_1(::System::Func_3<::UnityEngine::Vector4,int32_t,float_t>*  value) ;

static inline void setStaticF___9__19_0(::System::Func_2<::ArrayW<float_t>,::UnityEngine::Quaternion>*  value) ;

static inline void setStaticF___9__19_1(::System::Func_3<::UnityEngine::Quaternion,int32_t,float_t>*  value) ;

static inline void setStaticF___9__20_0(::System::Func_2<::ArrayW<float_t>,::UnityEngine::Pose>*  value) ;

static inline void setStaticF___9__20_1(::System::Func_3<::UnityEngine::Pose,int32_t,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneEuroFilter___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneEuroFilter___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OneEuroFilter___c(OneEuroFilter___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneEuroFilter___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneEuroFilter___c(OneEuroFilter___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16519};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::OneEuroFilter___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
// Dependencies Oculus.Interaction.Input.IOneEuroFilter`1<TData>, System.Object
namespace Oculus::Interaction::Input {
// cpp template
template<typename TData>
// Is value type: false
// CS Name: Oculus.Interaction.Input.OneEuroFilter/OneEuroFilterMulti`1<TData>
class CORDL_TYPE OneEuroFilter_OneEuroFilterMulti_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Value, put=set_Value)) TData  Value;

/// @brief Field <Value>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) TData  _Value_k__BackingField;

/// @brief Field _arrayToType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__arrayToType, put=__cordl_internal_set__arrayToType)) ::System::Func_2<::ArrayW<float_t>,TData>*  _arrayToType;

/// @brief Field _componentValues, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__componentValues, put=__cordl_internal_set__componentValues)) ::ArrayW<float_t>  _componentValues;

/// @brief Field _filters, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__filters, put=__cordl_internal_set__filters)) ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>*>  _filters;

/// @brief Field _getValAtIndex, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__getValAtIndex, put=__cordl_internal_set__getValAtIndex)) ::System::Func_3<TData,int32_t,float_t>*  _getValAtIndex;

/// @brief Convert operator to "::Oculus::Interaction::Input::IOneEuroFilter_1<TData>"
constexpr operator  ::Oculus::Interaction::Input::IOneEuroFilter_1<TData>*() noexcept;

static inline ::Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>* New_ctor(int32_t  numComponents, ::System::Func_2<::ArrayW<float_t>,TData>*  arrayToType, ::System::Func_3<TData,int32_t,float_t>*  getValAtIndex) ;

/// @brief Method Oculus.Interaction.Input.IOneEuroFilter<TData>.SetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Oculus_Interaction_Input_IOneEuroFilter_TData__SetProperties(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>  properties) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method SetProperties, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetProperties(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>  properties) ;

/// @brief Method Step, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TData Step(TData  newValue, float_t  deltaTime) ;

constexpr TData const& __cordl_internal_get__Value_k__BackingField() const;

constexpr TData& __cordl_internal_get__Value_k__BackingField() ;

constexpr ::System::Func_2<::ArrayW<float_t>,TData>* const& __cordl_internal_get__arrayToType() const;

constexpr ::System::Func_2<::ArrayW<float_t>,TData>*& __cordl_internal_get__arrayToType() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__componentValues() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__componentValues() ;

constexpr ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>*> const& __cordl_internal_get__filters() const;

constexpr ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>*>& __cordl_internal_get__filters() ;

constexpr ::System::Func_3<TData,int32_t,float_t>* const& __cordl_internal_get__getValAtIndex() const;

constexpr ::System::Func_3<TData,int32_t,float_t>*& __cordl_internal_get__getValAtIndex() ;

constexpr void __cordl_internal_set__Value_k__BackingField(TData  value) ;

constexpr void __cordl_internal_set__arrayToType(::System::Func_2<::ArrayW<float_t>,TData>*  value) ;

constexpr void __cordl_internal_set__componentValues(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__filters(::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>*>  value) ;

constexpr void __cordl_internal_set__getValAtIndex(::System::Func_3<TData,int32_t,float_t>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  numComponents, ::System::Func_2<::ArrayW<float_t>,TData>*  arrayToType, ::System::Func_3<TData,int32_t,float_t>*  getValAtIndex) ;

/// [CompilerGenerated]
/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TData get_Value() ;

/// @brief Convert to "::Oculus::Interaction::Input::IOneEuroFilter_1<TData>"
constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<TData>* i___Oculus__Interaction__Input__IOneEuroFilter_1_TData_() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Value(TData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneEuroFilter_OneEuroFilterMulti_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneEuroFilter_OneEuroFilterMulti_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OneEuroFilter_OneEuroFilterMulti_1(OneEuroFilter_OneEuroFilterMulti_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneEuroFilter_OneEuroFilterMulti_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneEuroFilter_OneEuroFilterMulti_1(OneEuroFilter_OneEuroFilterMulti_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16518};

/// [CompilerGenerated]
/// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
 TData  ____Value_k__BackingField;

/// @brief Field _arrayToType, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::ArrayW<float_t>,TData>*  ____arrayToType;

/// @brief Field _getValAtIndex, offset: 0x20, size: 0x8, def value: None
 ::System::Func_3<TData,int32_t,float_t>*  ____getValAtIndex;

/// @brief Field _filters, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>*>  ____filters;

/// @brief Field _componentValues, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ____componentValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.OneEuroFilter/LowPassFilter
class CORDL_TYPE OneEuroFilter_LowPassFilter : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PrevValue)) float_t  PrevValue;

/// @brief Field _hatx, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__hatx, put=__cordl_internal_set__hatx)) float_t  _hatx;

/// @brief Field _hatxprev, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__hatxprev, put=__cordl_internal_set__hatxprev)) float_t  _hatxprev;

/// @brief Field _isFirstUpdate, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFirstUpdate, put=__cordl_internal_set__isFirstUpdate)) bool  _isFirstUpdate;

/// @brief Method Filter, addr 0xa513cb4, size 0x38, virtual false, abstract: false, final false
inline float_t Filter(float_t  x, float_t  alpha) ;

static inline ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter* New_ctor() ;

/// @brief Method Reset, addr 0xa513d28, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

constexpr float_t const& __cordl_internal_get__hatx() const;

constexpr float_t& __cordl_internal_get__hatx() ;

constexpr float_t const& __cordl_internal_get__hatxprev() const;

constexpr float_t& __cordl_internal_get__hatxprev() ;

constexpr bool const& __cordl_internal_get__isFirstUpdate() const;

constexpr bool& __cordl_internal_get__isFirstUpdate() ;

constexpr void __cordl_internal_set__hatx(float_t  value) ;

constexpr void __cordl_internal_set__hatxprev(float_t  value) ;

constexpr void __cordl_internal_set__isFirstUpdate(bool  value) ;

/// @brief Method .ctor, addr 0xa513b3c, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PrevValue, addr 0xa514634, size 0x8, virtual false, abstract: false, final false
inline float_t get_PrevValue() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneEuroFilter_LowPassFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneEuroFilter_LowPassFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OneEuroFilter_LowPassFilter(OneEuroFilter_LowPassFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneEuroFilter_LowPassFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneEuroFilter_LowPassFilter(OneEuroFilter_LowPassFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16517};

/// @brief Field _isFirstUpdate, offset: 0x10, size: 0x1, def value: None
 bool  ____isFirstUpdate;

/// @brief Field _hatx, offset: 0x14, size: 0x4, def value: None
 float_t  ____hatx;

/// @brief Field _hatxprev, offset: 0x18, size: 0x4, def value: None
 float_t  ____hatxprev;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter, ____isFirstUpdate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter, ____hatx) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter, ____hatxprev) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
