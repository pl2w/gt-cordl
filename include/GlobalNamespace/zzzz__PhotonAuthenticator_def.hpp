#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonAuthenticator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PhotonAuthenticator)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class PhotonAuthenticator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PhotonAuthenticator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonAuthenticator*, "", "PhotonAuthenticator");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotonAuthenticator
class CORDL_TYPE PhotonAuthenticator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x5ab1d1c, size 0x10c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PhotonAuthenticator* New_ctor() ;

/// @brief Method SetCustomAuthenticationParameters, addr 0x5ab1e28, size 0x148, virtual false, abstract: false, final false
inline void SetCustomAuthenticationParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  customAuthData) ;

/// @brief Method .ctor, addr 0x5ab1f70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonAuthenticator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonAuthenticator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonAuthenticator(PhotonAuthenticator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonAuthenticator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonAuthenticator(PhotonAuthenticator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3290};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PhotonAuthenticator) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
