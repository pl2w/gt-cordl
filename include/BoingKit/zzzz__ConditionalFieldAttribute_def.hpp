#pragma once
// IWYU pragma private; include "BoingKit/ConditionalFieldAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConditionalFieldAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace BoingKit {
class ConditionalFieldAttribute;
}
// Write type traits
MARK_REF_T(::BoingKit::ConditionalFieldAttribute*);
DEFINE_IL2CPP_CLASS(::BoingKit::ConditionalFieldAttribute*, "BoingKit", "ConditionalFieldAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies UnityEngine.PropertyAttribute
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.ConditionalFieldAttribute
class CORDL_TYPE ConditionalFieldAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field CompareValue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CompareValue, put=__cordl_internal_set_CompareValue)) ::System::Object*  CompareValue;

/// @brief Field CompareValue2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CompareValue2, put=__cordl_internal_set_CompareValue2)) ::System::Object*  CompareValue2;

/// @brief Field CompareValue3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_CompareValue3, put=__cordl_internal_set_CompareValue3)) ::System::Object*  CompareValue3;

/// @brief Field CompareValue4, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_CompareValue4, put=__cordl_internal_set_CompareValue4)) ::System::Object*  CompareValue4;

/// @brief Field CompareValue5, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_CompareValue5, put=__cordl_internal_set_CompareValue5)) ::System::Object*  CompareValue5;

/// @brief Field CompareValue6, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_CompareValue6, put=__cordl_internal_set_CompareValue6)) ::System::Object*  CompareValue6;

/// @brief Field Label, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Label, put=__cordl_internal_set_Label)) ::StringW  Label;

/// @brief Field Max, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_Max, put=__cordl_internal_set_Max)) float_t  Max;

/// @brief Field Min, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_Min, put=__cordl_internal_set_Min)) float_t  Min;

/// @brief Field PropertyToCheck, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PropertyToCheck, put=__cordl_internal_set_PropertyToCheck)) ::StringW  PropertyToCheck;

 __declspec(property(get=get_ShowRange)) bool  ShowRange;

/// @brief Field Tooltip, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tooltip, put=__cordl_internal_set_Tooltip)) ::StringW  Tooltip;

static inline ::BoingKit::ConditionalFieldAttribute* New_ctor(::StringW  propertyToCheck, ::System::Object*  compareValue, ::System::Object*  compareValue2, ::System::Object*  compareValue3, ::System::Object*  compareValue4, ::System::Object*  compareValue5, ::System::Object*  compareValue6) ;

constexpr ::System::Object* const& __cordl_internal_get_CompareValue() const;

constexpr ::System::Object*& __cordl_internal_get_CompareValue() ;

constexpr ::System::Object* const& __cordl_internal_get_CompareValue2() const;

constexpr ::System::Object*& __cordl_internal_get_CompareValue2() ;

constexpr ::System::Object* const& __cordl_internal_get_CompareValue3() const;

constexpr ::System::Object*& __cordl_internal_get_CompareValue3() ;

constexpr ::System::Object* const& __cordl_internal_get_CompareValue4() const;

constexpr ::System::Object*& __cordl_internal_get_CompareValue4() ;

constexpr ::System::Object* const& __cordl_internal_get_CompareValue5() const;

constexpr ::System::Object*& __cordl_internal_get_CompareValue5() ;

constexpr ::System::Object* const& __cordl_internal_get_CompareValue6() const;

constexpr ::System::Object*& __cordl_internal_get_CompareValue6() ;

constexpr ::StringW const& __cordl_internal_get_Label() const;

constexpr ::StringW& __cordl_internal_get_Label() ;

constexpr float_t const& __cordl_internal_get_Max() const;

constexpr float_t& __cordl_internal_get_Max() ;

constexpr float_t const& __cordl_internal_get_Min() const;

constexpr float_t& __cordl_internal_get_Min() ;

constexpr ::StringW const& __cordl_internal_get_PropertyToCheck() const;

constexpr ::StringW& __cordl_internal_get_PropertyToCheck() ;

constexpr ::StringW const& __cordl_internal_get_Tooltip() const;

constexpr ::StringW& __cordl_internal_get_Tooltip() ;

constexpr void __cordl_internal_set_CompareValue(::System::Object*  value) ;

constexpr void __cordl_internal_set_CompareValue2(::System::Object*  value) ;

constexpr void __cordl_internal_set_CompareValue3(::System::Object*  value) ;

constexpr void __cordl_internal_set_CompareValue4(::System::Object*  value) ;

constexpr void __cordl_internal_set_CompareValue5(::System::Object*  value) ;

constexpr void __cordl_internal_set_CompareValue6(::System::Object*  value) ;

constexpr void __cordl_internal_set_Label(::StringW  value) ;

constexpr void __cordl_internal_set_Max(float_t  value) ;

constexpr void __cordl_internal_set_Min(float_t  value) ;

constexpr void __cordl_internal_set_PropertyToCheck(::StringW  value) ;

constexpr void __cordl_internal_set_Tooltip(::StringW  value) ;

/// @brief Method .ctor, addr 0x5e2b9ec, size 0x11c, virtual false, abstract: false, final false
inline void _ctor(::StringW  propertyToCheck, ::System::Object*  compareValue, ::System::Object*  compareValue2, ::System::Object*  compareValue3, ::System::Object*  compareValue4, ::System::Object*  compareValue5, ::System::Object*  compareValue6) ;

/// @brief Method get_ShowRange, addr 0x5e2b9dc, size 0x10, virtual false, abstract: false, final false
inline bool get_ShowRange() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConditionalFieldAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConditionalFieldAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConditionalFieldAttribute(ConditionalFieldAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalFieldAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConditionalFieldAttribute(ConditionalFieldAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5224};

/// @brief Field PropertyToCheck, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PropertyToCheck;

/// @brief Field CompareValue, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___CompareValue;

/// @brief Field CompareValue2, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ___CompareValue2;

/// @brief Field CompareValue3, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  ___CompareValue3;

/// @brief Field CompareValue4, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  ___CompareValue4;

/// @brief Field CompareValue5, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  ___CompareValue5;

/// @brief Field CompareValue6, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  ___CompareValue6;

/// @brief Field Label, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___Label;

/// @brief Field Tooltip, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___Tooltip;

/// @brief Field Min, offset: 0x60, size: 0x4, def value: None
 float_t  ___Min;

/// @brief Field Max, offset: 0x64, size: 0x4, def value: None
 float_t  ___Max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::ConditionalFieldAttribute, ___PropertyToCheck) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BoingKit::ConditionalFieldAttribute, ___CompareValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BoingKit::ConditionalFieldAttribute, ___CompareValue2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BoingKit::ConditionalFieldAttribute, ___CompareValue3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BoingKit::ConditionalFieldAttribute, ___CompareValue4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BoingKit::ConditionalFieldAttribute, ___CompareValue5) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BoingKit::ConditionalFieldAttribute, ___CompareValue6) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BoingKit::ConditionalFieldAttribute, ___Label) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BoingKit::ConditionalFieldAttribute, ___Tooltip) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BoingKit::ConditionalFieldAttribute, ___Min) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BoingKit::ConditionalFieldAttribute, ___Max) == 0x64, "Offset mismatch!");

static_assert(sizeof(::BoingKit::ConditionalFieldAttribute) == 0x68, "Size mismatch!");

} // namespace end def BoingKit
