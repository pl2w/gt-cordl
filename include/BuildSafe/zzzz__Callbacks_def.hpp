#pragma once
// IWYU pragma private; include "BuildSafe/Callbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Callbacks)
namespace BuildSafe {
class Callbacks_DidReloadScripts;
}
// Forward declare root types
namespace BuildSafe {
class Callbacks;
}
namespace BuildSafe {
class Callbacks_DidReloadScripts;
}
// Write type traits
MARK_REF_T(::BuildSafe::Callbacks*);
MARK_REF_T(::BuildSafe::Callbacks_DidReloadScripts*);
DEFINE_IL2CPP_CLASS(::BuildSafe::Callbacks*, "BuildSafe", "Callbacks");
DEFINE_IL2CPP_CLASS(::BuildSafe::Callbacks_DidReloadScripts*, "BuildSafe", "Callbacks/DidReloadScripts");
// Dependencies System.Object
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.Callbacks
class CORDL_TYPE Callbacks : public ::System::Object {
public:
// Declarations
using DidReloadScripts = ::BuildSafe::Callbacks_DidReloadScripts;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Callbacks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Callbacks", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Callbacks(Callbacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Callbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Callbacks(Callbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4246};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BuildSafe::Callbacks) == 0x10, "Size mismatch!");

} // namespace end def BuildSafe
// [Conditional("UNITY_EDITOR")]
// Dependencies System.Attribute
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.Callbacks/DidReloadScripts
class CORDL_TYPE Callbacks_DidReloadScripts : public ::System::Attribute {
public:
// Declarations
/// @brief Field activeOnly, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_activeOnly, put=__cordl_internal_set_activeOnly)) bool  activeOnly;

static inline ::BuildSafe::Callbacks_DidReloadScripts* New_ctor(bool  activeOnly) ;

constexpr bool const& __cordl_internal_get_activeOnly() const;

constexpr bool& __cordl_internal_get_activeOnly() ;

constexpr void __cordl_internal_set_activeOnly(bool  value) ;

/// @brief Method .ctor, addr 0x5c4ec48, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  activeOnly) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Callbacks_DidReloadScripts() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Callbacks_DidReloadScripts", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Callbacks_DidReloadScripts(Callbacks_DidReloadScripts && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Callbacks_DidReloadScripts", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Callbacks_DidReloadScripts(Callbacks_DidReloadScripts const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4245};

/// @brief Field activeOnly, offset: 0x10, size: 0x1, def value: None
 bool  ___activeOnly;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BuildSafe::Callbacks_DidReloadScripts, ___activeOnly) == 0x10, "Offset mismatch!");

static_assert(sizeof(::BuildSafe::Callbacks_DidReloadScripts) == 0x18, "Size mismatch!");

} // namespace end def BuildSafe
