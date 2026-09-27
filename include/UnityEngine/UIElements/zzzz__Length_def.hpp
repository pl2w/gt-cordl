#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Length.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__LengthUnit_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_Unit_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Length)
namespace GlobalNamespace {
struct Length_Unit;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct LengthUnit;
}
namespace UnityEngine::UIElements {
class Length_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_Length_UnitProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Length_ValueProperty;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Length_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_Length_UnitProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Length_ValueProperty;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::Length_PropertyBag*);
MARK_REF_T(::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*);
MARK_REF_T(::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*);
MARK_VAL_T(::UnityEngine::UIElements::Length);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Length_PropertyBag*, "UnityEngine.UIElements", "Length/PropertyBag");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*, "UnityEngine.UIElements", "Length/PropertyBag/UnitProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*, "UnityEngine.UIElements", "Length/PropertyBag/ValueProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Length, "UnityEngine.UIElements", "Length");
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.Length
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Length/PropertyBag
class CORDL_TYPE Length_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::Length> {
public:
// Declarations
using UnitProperty = ::UnityEngine::UIElements::PropertyBag_Length_UnitProperty;

using ValueProperty = ::UnityEngine::UIElements::PropertyBag_Length_ValueProperty;

static inline ::UnityEngine::UIElements::Length_PropertyBag* New_ctor() ;

/// @brief Method .ctor, addr 0xb7836fc, size 0x10c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Length_PropertyBag() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Length_PropertyBag", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Length_PropertyBag(Length_PropertyBag && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Length_PropertyBag", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Length_PropertyBag(Length_PropertyBag const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8152};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::Length_PropertyBag) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Length, UnityEngine.UIElements.LengthUnit
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Length/PropertyBag/UnitProperty
class CORDL_TYPE PropertyBag_Length_UnitProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::LengthUnit> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsReadOnly_k__BackingField, put=__cordl_internal_set__IsReadOnly_k__BackingField)) bool  _IsReadOnly_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Method GetValue, addr 0xb783940, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::LengthUnit GetValue(::by_ref<::UnityEngine::UIElements::Length>  container) ;

static inline ::UnityEngine::UIElements::PropertyBag_Length_UnitProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb783948, size 0x8, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::Length>  container, ::UnityEngine::UIElements::LengthUnit  value) ;

constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xb783880, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsReadOnly, addr 0xb783938, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0xb783930, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertyBag_Length_UnitProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Length_UnitProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyBag_Length_UnitProperty(PropertyBag_Length_UnitProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Length_UnitProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyBag_Length_UnitProperty(PropertyBag_Length_UnitProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8151};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsReadOnly_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Length_UnitProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Length_UnitProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PropertyBag_Length_UnitProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Length
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Length/PropertyBag/ValueProperty
class CORDL_TYPE PropertyBag_Length_ValueProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Length,float_t> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsReadOnly_k__BackingField, put=__cordl_internal_set__IsReadOnly_k__BackingField)) bool  _IsReadOnly_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Method GetValue, addr 0xb783908, size 0x8, virtual true, abstract: false, final false
inline float_t GetValue(::by_ref<::UnityEngine::UIElements::Length>  container) ;

static inline ::UnityEngine::UIElements::PropertyBag_Length_ValueProperty* New_ctor() ;

/// @brief Method SetValue, addr 0xb783910, size 0x20, virtual true, abstract: false, final false
inline void SetValue(::by_ref<::UnityEngine::UIElements::Length>  container, float_t  value) ;

constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xb783808, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsReadOnly, addr 0xb783900, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0xb7838f8, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertyBag_Length_ValueProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Length_ValueProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyBag_Length_ValueProperty(PropertyBag_Length_ValueProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Length_ValueProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyBag_Length_ValueProperty(PropertyBag_Length_ValueProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8150};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsReadOnly_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Length_ValueProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Length_ValueProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PropertyBag_Length_ValueProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Length::Unit
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Length
struct CORDL_TYPE Length {
public:
// Declarations
using Unit = ::GlobalNamespace::Length_Unit;

using PropertyBag = ::UnityEngine::UIElements::Length_PropertyBag;

 __declspec(property(get=get_unit, put=set_unit)) ::UnityEngine::UIElements::LengthUnit  unit;

 __declspec(property(get=get_value, put=set_value)) float_t  value;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Length>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::Length>*() ;

/// @brief Method Auto, addr 0xb783398, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length Auto() ;

/// @brief Method Equals, addr 0xb7834b4, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb783490, size 0x24, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::UIElements::Length  other) ;

/// @brief Method GetHashCode, addr 0xb780700, size 0x28, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsAuto, addr 0xb783408, size 0x10, virtual false, abstract: false, final false
inline bool IsAuto() ;

/// @brief Method IsNone, addr 0xb783418, size 0x10, virtual false, abstract: false, final false
inline bool IsNone() ;

/// @brief Method None, addr 0xb7833c8, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length None() ;

/// @brief Method Percent, addr 0xb78334c, size 0x24, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length Percent(float_t  value) ;

/// @brief Method ToString, addr 0xb783544, size 0x1b8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb783428, size 0x28, virtual false, abstract: false, final false
inline void _ctor(float_t  value) ;

/// @brief Method .ctor, addr 0xb7833a0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(float_t  value, ::GlobalNamespace::Length_Unit  unit) ;

/// @brief Method .ctor, addr 0xb783370, size 0x28, virtual false, abstract: false, final false
inline void _ctor(float_t  value, ::UnityEngine::UIElements::LengthUnit  unit) ;

/// @brief Method get_unit, addr 0xb7833f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::LengthUnit get_unit() ;

/// @brief Method get_value, addr 0xb7833d0, size 0x8, virtual false, abstract: false, final false
inline float_t get_value() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Length>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Length>* i___System__IEquatable_1___UnityEngine__UIElements__Length_() ;

/// @brief Method op_Equality, addr 0xb780364, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::UIElements::Length  lhs, ::UnityEngine::UIElements::Length  rhs) ;

/// @brief Method op_Implicit, addr 0xb783450, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Length op_Implicit___UnityEngine__UIElements__Length(float_t  value) ;

/// @brief Method op_Inequality, addr 0xb783470, size 0x20, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::UIElements::Length  lhs, ::UnityEngine::UIElements::Length  rhs) ;

/// @brief Method set_unit, addr 0xb783400, size 0x8, virtual false, abstract: false, final false
inline void set_unit(::UnityEngine::UIElements::LengthUnit  value) ;

/// @brief Method set_value, addr 0xb7833d8, size 0x20, virtual false, abstract: false, final false
inline void set_value(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Length() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Unit", ty: "::GlobalNamespace::Length_Unit", modifiers: "", def_value: None, comment: None }]
constexpr Length(float_t  m_Value, ::GlobalNamespace::Length_Unit  m_Unit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8154};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field k_MaxValue offset 0xffffffff size 0x4
static constexpr float_t  k_MaxValue{static_cast<float_t>(8388608.0f)};

/// [SerializeField]
/// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
 float_t  m_Value;

/// [SerializeField]
/// @brief Field m_Unit, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::Length_Unit  m_Unit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Length, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Length, m_Unit) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Length) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
