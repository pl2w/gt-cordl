#pragma once
// IWYU pragma private; include "Viveport/Internal/Android.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Android)
namespace UnityEngine {
class AndroidJavaClass;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace Viveport::Internal {
class Android;
}
// Write type traits
MARK_REF_T(::Viveport::Internal::Android*);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::Android*, "Viveport.Internal", "Android");
// Dependencies System.Object
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.Android
class CORDL_TYPE Android : public ::System::Object {
public:
// Declarations
/// @brief Field _api, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__api, put=setStaticF__api)) ::UnityEngine::AndroidJavaObject*  _api;

/// @brief Field _deeplink, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__deeplink, put=setStaticF__deeplink)) ::UnityEngine::AndroidJavaObject*  _deeplink;

/// @brief Field _iAPurchase, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__iAPurchase, put=setStaticF__iAPurchase)) ::UnityEngine::AndroidJavaObject*  _iAPurchase;

/// @brief Field _sessionToken, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__sessionToken, put=setStaticF__sessionToken)) ::UnityEngine::AndroidJavaObject*  _sessionToken;

/// @brief Field _subscription, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__subscription, put=setStaticF__subscription)) ::UnityEngine::AndroidJavaObject*  _subscription;

/// @brief Field _unityPlayer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__unityPlayer, put=setStaticF__unityPlayer)) ::UnityEngine::AndroidJavaClass*  _unityPlayer;

/// @brief Field _user, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__user, put=setStaticF__user)) ::UnityEngine::AndroidJavaObject*  _user;

/// @brief Field _userStats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__userStats, put=setStaticF__userStats)) ::UnityEngine::AndroidJavaObject*  _userStats;

/// @brief Method GetDeeplink, addr 0x5b59bb4, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* GetDeeplink() ;

/// @brief Method GetJavaAPI, addr 0x5b59518, size 0x124, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* GetJavaAPI() ;

/// @brief Method GetJavaIAPurchase, addr 0x5b59ed0, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* GetJavaIAPurchase() ;

/// @brief Method GetJavaSessionToken, addr 0x5b5a230, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* GetJavaSessionToken() ;

/// @brief Method GetJavaSubscription, addr 0x5b5a080, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* GetJavaSubscription() ;

/// @brief Method GetJavaUser, addr 0x5b5996c, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* GetJavaUser() ;

/// @brief Method GetJavaUserStats, addr 0x5b59a90, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* GetJavaUserStats() ;

static inline ::Viveport::Internal::Android* New_ctor() ;

/// @brief Method .ctor, addr 0x5b5a45c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::AndroidJavaObject* getStaticF__api() ;

static inline ::UnityEngine::AndroidJavaObject* getStaticF__deeplink() ;

static inline ::UnityEngine::AndroidJavaObject* getStaticF__iAPurchase() ;

static inline ::UnityEngine::AndroidJavaObject* getStaticF__sessionToken() ;

static inline ::UnityEngine::AndroidJavaObject* getStaticF__subscription() ;

static inline ::UnityEngine::AndroidJavaClass* getStaticF__unityPlayer() ;

static inline ::UnityEngine::AndroidJavaObject* getStaticF__user() ;

static inline ::UnityEngine::AndroidJavaObject* getStaticF__userStats() ;

/// @brief Method get_CurrentActivity, addr 0x5b5a400, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* get_CurrentActivity() ;

/// @brief Method get_CurrentContext, addr 0x5b5963c, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* get_CurrentContext() ;

/// @brief Method get_UnityPlayer, addr 0x5b5a354, size 0xac, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaClass* get_UnityPlayer() ;

static inline void setStaticF__api(::UnityEngine::AndroidJavaObject*  value) ;

static inline void setStaticF__deeplink(::UnityEngine::AndroidJavaObject*  value) ;

static inline void setStaticF__iAPurchase(::UnityEngine::AndroidJavaObject*  value) ;

static inline void setStaticF__sessionToken(::UnityEngine::AndroidJavaObject*  value) ;

static inline void setStaticF__subscription(::UnityEngine::AndroidJavaObject*  value) ;

static inline void setStaticF__unityPlayer(::UnityEngine::AndroidJavaClass*  value) ;

static inline void setStaticF__user(::UnityEngine::AndroidJavaObject*  value) ;

static inline void setStaticF__userStats(::UnityEngine::AndroidJavaObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Android() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Android", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Android(Android && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Android", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Android(Android const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3813};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Internal::Android) == 0x10, "Size mismatch!");

} // namespace end def Viveport::Internal
