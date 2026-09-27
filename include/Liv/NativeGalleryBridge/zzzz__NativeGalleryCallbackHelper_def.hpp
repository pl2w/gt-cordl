#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/NativeGalleryCallbackHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NativeGalleryCallbackHelper)
namespace System {
class Action;
}
// Forward declare root types
namespace Liv::NativeGalleryBridge {
class NativeGalleryCallbackHelper;
}
// Write type traits
MARK_REF_T(::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper*);
DEFINE_IL2CPP_CLASS(::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper*, "Liv.NativeGalleryBridge", "NativeGalleryCallbackHelper");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::NativeGalleryBridge {
// Is value type: false
// CS Name: Liv.NativeGalleryBridge.NativeGalleryCallbackHelper
class CORDL_TYPE NativeGalleryCallbackHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field mainThreadAction, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainThreadAction, put=__cordl_internal_set_mainThreadAction)) ::System::Action*  mainThreadAction;

/// @brief Method Awake, addr 0xa368134, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CallOnMainThread, addr 0xa36829c, size 0x8, virtual false, abstract: false, final false
inline void CallOnMainThread(::System::Action*  function) ;

static inline ::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper* New_ctor() ;

/// @brief Method Update, addr 0xa3681a0, size 0xfc, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action* const& __cordl_internal_get_mainThreadAction() const;

constexpr ::System::Action*& __cordl_internal_get_mainThreadAction() ;

constexpr void __cordl_internal_set_mainThreadAction(::System::Action*  value) ;

/// @brief Method .ctor, addr 0xa3682a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeGalleryCallbackHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeGalleryCallbackHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeGalleryCallbackHelper(NativeGalleryCallbackHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeGalleryCallbackHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeGalleryCallbackHelper(NativeGalleryCallbackHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32946};

/// @brief Field mainThreadAction, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___mainThreadAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper, ___mainThreadAction) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper) == 0x28, "Size mismatch!");

} // namespace end def Liv::NativeGalleryBridge
