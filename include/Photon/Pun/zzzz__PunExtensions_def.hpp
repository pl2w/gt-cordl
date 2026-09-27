#pragma once
// IWYU pragma private; include "Photon/Pun/PunExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PunExtensions)
namespace Photon::Pun {
class PhotonView;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun {
class PunExtensions;
}
// Write type traits
MARK_REF_T(::Photon::Pun::PunExtensions*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PunExtensions*, "Photon.Pun", "PunExtensions");
// [Extension]
// Dependencies System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PunExtensions
class CORDL_TYPE PunExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field ParametersOfMethods, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ParametersOfMethods, put=setStaticF_ParametersOfMethods)) ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*,::ArrayW<::System::Reflection::ParameterInfo*>>*  ParametersOfMethods;

/// [Extension]
/// @brief Method AlmostEquals, addr 0xa728928, size 0x70, virtual false, abstract: false, final false
static inline bool AlmostEquals(::UnityEngine::Quaternion  target, ::UnityEngine::Quaternion  second, float_t  maxAngle) ;

/// [Extension]
/// @brief Method AlmostEquals, addr 0xa728908, size 0x20, virtual false, abstract: false, final false
static inline bool AlmostEquals(::UnityEngine::Vector2  target, ::UnityEngine::Vector2  second, float_t  sqrMagnitudePrecision) ;

/// [Extension]
/// @brief Method AlmostEquals, addr 0xa7288dc, size 0x2c, virtual false, abstract: false, final false
static inline bool AlmostEquals(::UnityEngine::Vector3  target, ::UnityEngine::Vector3  second, float_t  sqrMagnitudePrecision) ;

/// [Extension]
/// @brief Method AlmostEquals, addr 0xa728998, size 0x10, virtual false, abstract: false, final false
static inline bool AlmostEquals(float_t  target, float_t  second, float_t  floatDiff) ;

/// [Extension]
/// @brief Method CheckIsAssignableFrom, addr 0xa72cb78, size 0x1c, virtual false, abstract: false, final false
static inline bool CheckIsAssignableFrom(::System::Type*  to, ::System::Type*  from) ;

/// [Extension]
/// @brief Method CheckIsInterface, addr 0xa72cb94, size 0x14, virtual false, abstract: false, final false
static inline bool CheckIsInterface(::System::Type*  to) ;

/// [Extension]
/// @brief Method GetCachedParemeters, addr 0xa724588, size 0x100, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::ParameterInfo*> GetCachedParemeters(::System::Reflection::MethodInfo*  mo) ;

/// [Extension]
/// @brief Method GetPhotonView, addr 0xa72cb28, size 0x50, virtual false, abstract: false, final false
static inline ::UnityW<::Photon::Pun::PhotonView> GetPhotonView(::UnityEngine::GameObject*  go) ;

/// [Extension]
/// @brief Method GetPhotonViewsInChildren, addr 0xa71f654, size 0x54, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::Photon::Pun::PhotonView>> GetPhotonViewsInChildren(::UnityEngine::GameObject*  go) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*,::ArrayW<::System::Reflection::ParameterInfo*>>* getStaticF_ParametersOfMethods() ;

static inline void setStaticF_ParametersOfMethods(::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*,::ArrayW<::System::Reflection::ParameterInfo*>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PunExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PunExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PunExtensions(PunExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PunExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PunExtensions(PunExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29720};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::PunExtensions) == 0x10, "Size mismatch!");

} // namespace end def Photon::Pun
