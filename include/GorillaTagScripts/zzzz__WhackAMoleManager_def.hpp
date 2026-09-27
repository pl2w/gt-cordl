#pragma once
// IWYU pragma private; include "GorillaTagScripts/WhackAMoleManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(WhackAMoleManager)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GorillaTagScripts {
class WhackAMole;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GorillaTagScripts {
class WhackAMoleManager;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::WhackAMoleManager*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::WhackAMoleManager*, "GorillaTagScripts", "WhackAMoleManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.WhackAMoleManager
class CORDL_TYPE WhackAMoleManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field allGames, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_allGames, put=__cordl_internal_set_allGames)) ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTagScripts::WhackAMole>>*  allGames;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaTagScripts::WhackAMoleManager>  instance;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5b80980, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTagScripts::WhackAMoleManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5b80b44, size 0x54, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5b80a0c, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b80a00, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Register, addr 0x5b7d724, size 0x58, virtual false, abstract: false, final false
inline void Register(::GorillaTagScripts::WhackAMole*  whackAMole) ;

/// @brief Method SliceUpdate, addr 0x5b80a18, size 0x12c, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Unregister, addr 0x5b7da40, size 0x58, virtual false, abstract: false, final false
inline void Unregister(::GorillaTagScripts::WhackAMole*  whackAMole) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTagScripts::WhackAMole>>* const& __cordl_internal_get_allGames() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTagScripts::WhackAMole>>*& __cordl_internal_get_allGames() ;

constexpr void __cordl_internal_set_allGames(::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTagScripts::WhackAMole>>*  value) ;

/// @brief Method .ctor, addr 0x5b80b98, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTagScripts::WhackAMoleManager> getStaticF_instance() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF_instance(::UnityW<::GorillaTagScripts::WhackAMoleManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhackAMoleManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhackAMoleManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhackAMoleManager(WhackAMoleManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhackAMoleManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhackAMoleManager(WhackAMoleManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3917};

/// @brief Field allGames, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTagScripts::WhackAMole>>*  ___allGames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::WhackAMoleManager, ___allGames) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::WhackAMoleManager) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts
