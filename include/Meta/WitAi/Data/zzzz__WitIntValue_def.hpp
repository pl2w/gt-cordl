#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/WitIntValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Data/zzzz__WitValue_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitIntValue)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Data {
class WitIntValue;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::WitIntValue*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::WitIntValue*, "Meta.WitAi.Data", "WitIntValue");
// Dependencies Meta.WitAi.Data.WitValue
namespace Meta::WitAi::Data {
// Is value type: false
// CS Name: Meta.WitAi.Data.WitIntValue
class CORDL_TYPE WitIntValue : public ::Meta::WitAi::Data::WitValue {
public:
// Declarations
/// @brief Method Equals, addr 0x9e9aa5c, size 0xc8, virtual true, abstract: false, final false
inline bool Equals(::Meta::WitAi::Json::WitResponseNode*  response, ::System::Object*  value) ;

/// @brief Method GetIntValue, addr 0x9e9aa34, size 0x28, virtual false, abstract: false, final false
inline int32_t GetIntValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method GetValue, addr 0x9e9aa08, size 0x2c, virtual true, abstract: false, final false
inline ::System::Object* GetValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

static inline ::Meta::WitAi::Data::WitIntValue* New_ctor() ;

/// @brief Method .ctor, addr 0x9e9ab24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitIntValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitIntValue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitIntValue(WitIntValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitIntValue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitIntValue(WitIntValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25703};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Data::WitIntValue) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Data
