#pragma once
// IWYU pragma private; include "GorillaTagScripts/GTSignalTest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTSignalListener_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GTSignalTest)
namespace GlobalNamespace {
class GTSignalListener;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GorillaTagScripts {
class GTSignalTest;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GTSignalTest*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GTSignalTest*, "GorillaTagScripts", "GTSignalTest");
// Dependencies GTSignalListener, UnityEngine.MeshRenderer
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GTSignalTest
class CORDL_TYPE GTSignalTest : public ::GlobalNamespace::GTSignalListener {
public:
// Declarations
/// @brief Field listeners, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_listeners, put=__cordl_internal_set_listeners)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*  listeners;

/// @brief Field target, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::MeshRenderer>  target;

/// @brief Field targets, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_targets, put=__cordl_internal_set_targets)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  targets;

static inline ::GorillaTagScripts::GTSignalTest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>* const& __cordl_internal_get_listeners() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*& __cordl_internal_get_listeners() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_target() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_targets() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_targets() ;

constexpr void __cordl_internal_set_listeners(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_targets(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

/// @brief Method .ctor, addr 0x5bcb5bc, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTSignalTest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTSignalTest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTSignalTest(GTSignalTest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTSignalTest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTSignalTest(GTSignalTest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3994};

/// @brief Field targets, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___targets;

/// [Space]
/// @brief Field target, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___target;

/// @brief Field listeners, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*  ___listeners;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GTSignalTest, ___targets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GTSignalTest, ___target) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GTSignalTest, ___listeners) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GTSignalTest) == 0x60, "Size mismatch!");

} // namespace end def GorillaTagScripts
