#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/DisposableManagerSingleton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisposableManagerSingleton)
namespace System {
class IDisposable;
}
namespace Unity::XR::CoreUtils::Collections {
template<typename T>
class HashSetList_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class DisposableManagerSingleton;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "DisposableManagerSingleton");
// [AddComponentMenu("")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Utilities.DisposableManagerSingleton.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.DisposableManagerSingleton
class CORDL_TYPE DisposableManagerSingleton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_Disposables, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Disposables, put=__cordl_internal_set_m_Disposables)) ::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::IDisposable*>*  m_Disposables;

/// @brief Field s_DisposableManagerSingleton, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DisposableManagerSingleton, put=setStaticF_s_DisposableManagerSingleton)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton>  s_DisposableManagerSingleton;

/// @brief Method Awake, addr 0xb42558c, size 0x13c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DisposeAll, addr 0xb4256cc, size 0x1e8, virtual false, abstract: false, final false
inline void DisposeAll() ;

/// @brief Method Initialize, addr 0xb425460, size 0x12c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton> Initialize() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0xb4258b4, size 0x4, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnDestroy, addr 0xb4256c8, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RegisterDisposable, addr 0xb4258b8, size 0x5c, virtual false, abstract: false, final false
static inline void RegisterDisposable(::System::IDisposable*  disposableToRegister) ;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::IDisposable*>* const& __cordl_internal_get_m_Disposables() const;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::IDisposable*>*& __cordl_internal_get_m_Disposables() ;

constexpr void __cordl_internal_set_m_Disposables(::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::IDisposable*>*  value) ;

/// @brief Method .ctor, addr 0xb425914, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton> getStaticF_s_DisposableManagerSingleton() ;

/// @brief Method get_instance, addr 0xb42545c, size 0x4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton> get_instance() ;

static inline void setStaticF_s_DisposableManagerSingleton(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisposableManagerSingleton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisposableManagerSingleton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DisposableManagerSingleton(DisposableManagerSingleton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisposableManagerSingleton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisposableManagerSingleton(DisposableManagerSingleton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11203};

/// @brief Field m_Disposables, offset: 0x20, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::IDisposable*>*  ___m_Disposables;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton, ___m_Disposables) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::DisposableManagerSingleton) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
