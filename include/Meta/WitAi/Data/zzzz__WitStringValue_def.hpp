#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/WitStringValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Data/zzzz__WitValue_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitStringValue)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Data {
class WitStringValue;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::WitStringValue*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::WitStringValue*, "Meta.WitAi.Data", "WitStringValue");
// Dependencies Meta.WitAi.Data.WitValue
namespace Meta::WitAi::Data {
// Is value type: false
// CS Name: Meta.WitAi.Data.WitStringValue
class CORDL_TYPE WitStringValue : public ::Meta::WitAi::Data::WitValue {
public:
// Declarations
/// @brief Method Equals, addr 0x9e9ab58, size 0xb8, virtual true, abstract: false, final false
inline bool Equals(::Meta::WitAi::Json::WitResponseNode*  response, ::System::Object*  value) ;

/// @brief Method GetStringValue, addr 0x9e9ab30, size 0x28, virtual false, abstract: false, final false
inline ::StringW GetStringValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method GetValue, addr 0x9e9ab2c, size 0x4, virtual true, abstract: false, final false
inline ::System::Object* GetValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

static inline ::Meta::WitAi::Data::WitStringValue* New_ctor() ;

/// @brief Method .ctor, addr 0x9e9ac10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitStringValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitStringValue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitStringValue(WitStringValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitStringValue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitStringValue(WitStringValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25704};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Data::WitStringValue) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Data
