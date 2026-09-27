#pragma once
// IWYU pragma private; include "BuildSafe/ObjectFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ObjectFactory)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace BuildSafe {
class ObjectFactory;
}
// Write type traits
MARK_REF_T(::BuildSafe::ObjectFactory*);
DEFINE_IL2CPP_CLASS(::BuildSafe::ObjectFactory*, "BuildSafe", "ObjectFactory");
// Dependencies System.Object
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.ObjectFactory
class CORDL_TYPE ObjectFactory : public ::System::Object {
public:
// Declarations
/// @brief Method add_componentWasAdded, addr 0x5c4ec98, size 0x4, virtual false, abstract: false, final false
static inline void add_componentWasAdded(::System::Action_1<::UnityW<::UnityEngine::Component>>*  value) ;

/// @brief Method remove_componentWasAdded, addr 0x5c4ec9c, size 0x4, virtual false, abstract: false, final false
static inline void remove_componentWasAdded(::System::Action_1<::UnityW<::UnityEngine::Component>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectFactory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectFactory(ObjectFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectFactory(ObjectFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4252};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BuildSafe::ObjectFactory) == 0x10, "Size mismatch!");

} // namespace end def BuildSafe
