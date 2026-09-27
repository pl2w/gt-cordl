#pragma once
// IWYU pragma private; include "GorillaNetworking/ExtensionMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExtensionMethods)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GorillaNetworking {
class ExtensionMethods;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::ExtensionMethods*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::ExtensionMethods*, "GorillaNetworking", "ExtensionMethods");
// [Extension]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.ExtensionMethods
class CORDL_TYPE ExtensionMethods : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method AddOrUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TKey,typename TValue>
static inline void AddOrUpdate(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dict, TKey  key, TValue  value) ;

/// [Extension]
/// @brief Method SafeInvoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SafeInvoke(::System::Action_1<T>*  action, T  data) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExtensionMethods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExtensionMethods", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExtensionMethods(ExtensionMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionMethods", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExtensionMethods(ExtensionMethods const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4393};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::ExtensionMethods) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking
