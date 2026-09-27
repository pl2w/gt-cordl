#pragma once
// IWYU pragma private; include "Meta/WitAi/RegisteredMatchIntent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RegisteredMatchIntent)
namespace Meta::WitAi {
class MatchIntent;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::WitAi {
class RegisteredMatchIntent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::RegisteredMatchIntent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::RegisteredMatchIntent*, "Meta.WitAi", "RegisteredMatchIntent");
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.RegisteredMatchIntent
class CORDL_TYPE RegisteredMatchIntent : public ::System::Object {
public:
// Declarations
/// @brief Field matchIntent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_matchIntent, put=__cordl_internal_set_matchIntent)) ::Meta::WitAi::MatchIntent*  matchIntent;

/// @brief Field method, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_method, put=__cordl_internal_set_method)) ::System::Reflection::MethodInfo*  method;

/// @brief Field type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::System::Type*  type;

static inline ::Meta::WitAi::RegisteredMatchIntent* New_ctor() ;

constexpr ::Meta::WitAi::MatchIntent* const& __cordl_internal_get_matchIntent() const;

constexpr ::Meta::WitAi::MatchIntent*& __cordl_internal_get_matchIntent() ;

constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_method() const;

constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_method() ;

constexpr ::System::Type* const& __cordl_internal_get_type() const;

constexpr ::System::Type*& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_matchIntent(::Meta::WitAi::MatchIntent*  value) ;

constexpr void __cordl_internal_set_method(::System::Reflection::MethodInfo*  value) ;

constexpr void __cordl_internal_set_type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x9e7448c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegisteredMatchIntent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegisteredMatchIntent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegisteredMatchIntent(RegisteredMatchIntent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegisteredMatchIntent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegisteredMatchIntent(RegisteredMatchIntent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25539};

/// @brief Field type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___type;

/// @brief Field method, offset: 0x18, size: 0x8, def value: None
 ::System::Reflection::MethodInfo*  ___method;

/// @brief Field matchIntent, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::MatchIntent*  ___matchIntent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::RegisteredMatchIntent, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::RegisteredMatchIntent, ___method) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::RegisteredMatchIntent, ___matchIntent) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::RegisteredMatchIntent) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi
