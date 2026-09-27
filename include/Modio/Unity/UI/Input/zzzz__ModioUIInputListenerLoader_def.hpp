#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Input/ModioUIInputListenerLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioUIInputListenerLoader)
// Forward declare root types
namespace Modio::Unity::UI::Input {
class ModioUIInputListenerLoader;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Input::ModioUIInputListenerLoader*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Input::ModioUIInputListenerLoader*, "Modio.Unity.UI.Input", "ModioUIInputListenerLoader");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Input {
// Is value type: false
// CS Name: Modio.Unity.UI.Input.ModioUIInputListenerLoader
class CORDL_TYPE ModioUIInputListenerLoader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _fallbackPrefabName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__fallbackPrefabName, put=__cordl_internal_set__fallbackPrefabName)) ::StringW  _fallbackPrefabName;

/// @brief Field _prefabNames, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefabNames, put=__cordl_internal_set__prefabNames)) ::ArrayW<::StringW>  _prefabNames;

/// @brief Method Awake, addr 0x9fb5750, size 0x1c8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Modio::Unity::UI::Input::ModioUIInputListenerLoader* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__fallbackPrefabName() const;

constexpr ::StringW& __cordl_internal_get__fallbackPrefabName() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__prefabNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__prefabNames() ;

constexpr void __cordl_internal_set__fallbackPrefabName(::StringW  value) ;

constexpr void __cordl_internal_set__prefabNames(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x9fb5918, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIInputListenerLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIInputListenerLoader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIInputListenerLoader(ModioUIInputListenerLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIInputListenerLoader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIInputListenerLoader(ModioUIInputListenerLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27127};

/// [SerializeField]
/// @brief Field _prefabNames, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____prefabNames;

/// [SerializeField]
/// @brief Field _fallbackPrefabName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____fallbackPrefabName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInputListenerLoader, ____prefabNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInputListenerLoader, ____fallbackPrefabName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Input::ModioUIInputListenerLoader) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Input
