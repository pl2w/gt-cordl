#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/WitFloatValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Data/zzzz__WitValue_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WitFloatValue)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Data {
class WitFloatValue;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::WitFloatValue*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::WitFloatValue*, "Meta.WitAi.Data", "WitFloatValue");
// Dependencies Meta.WitAi.Data.WitValue
namespace Meta::WitAi::Data {
// Is value type: false
// CS Name: Meta.WitAi.Data.WitFloatValue
class CORDL_TYPE WitFloatValue : public ::Meta::WitAi::Data::WitValue {
public:
// Declarations
/// @brief Field equalityTolerance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_equalityTolerance, put=__cordl_internal_set_equalityTolerance)) float_t  equalityTolerance;

/// @brief Method Equals, addr 0x9e9a8a8, size 0x100, virtual true, abstract: false, final false
inline bool Equals(::Meta::WitAi::Json::WitResponseNode*  response, ::System::Object*  value) ;

/// @brief Method GetFloatValue, addr 0x9e9a880, size 0x28, virtual false, abstract: false, final false
inline float_t GetFloatValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method GetValue, addr 0x9e9a858, size 0x28, virtual true, abstract: false, final false
inline ::System::Object* GetValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

static inline ::Meta::WitAi::Data::WitFloatValue* New_ctor() ;

constexpr float_t const& __cordl_internal_get_equalityTolerance() const;

constexpr float_t& __cordl_internal_get_equalityTolerance() ;

constexpr void __cordl_internal_set_equalityTolerance(float_t  value) ;

/// @brief Method .ctor, addr 0x9e9a9ec, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitFloatValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitFloatValue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitFloatValue(WitFloatValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitFloatValue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitFloatValue(WitFloatValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25702};

/// [SerializeField]
/// @brief Field equalityTolerance, offset: 0x28, size: 0x4, def value: None
 float_t  ___equalityTolerance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::WitFloatValue, ___equalityTolerance) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::WitFloatValue) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Data
