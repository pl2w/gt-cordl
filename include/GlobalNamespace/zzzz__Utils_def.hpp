#pragma once
// IWYU pragma private; include "GlobalNamespace/Utils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace GlobalNamespace {
class IPreDisable;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
template<typename T>
class PooledList_1;
}
namespace GorillaTag {
template<typename T>
class ObjectPool_1;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Utils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Utils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Utils*, "", "Utils");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Utils
class CORDL_TYPE Utils : public ::System::Object {
public:
// Declarations
/// @brief Field g_listPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_g_listPool, put=setStaticF_g_listPool)) ::GorillaTag::ObjectPool_1<::GlobalNamespace::PooledList_1<::GlobalNamespace::IPreDisable*>*>*  g_listPool;

/// @brief Field reusableSB, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reusableSB, put=setStaticF_reusableSB)) ::System::Text::StringBuilder*  reusableSB;

/// [Extension]
/// @brief Method AddIfNew, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void AddIfNew(::System::Collections::Generic::List_1<T>*  list, T  item) ;

/// @brief Method CalculateNetworkDeltaTime, addr 0x5b1c3f0, size 0x20, virtual false, abstract: false, final false
static inline double_t CalculateNetworkDeltaTime(double_t  prevTime, double_t  newTime) ;

/// [Extension]
/// @brief Method Disable, addr 0x5b1b984, size 0x294, virtual false, abstract: false, final false
static inline void Disable(::UnityEngine::GameObject*  target) ;

/// [Extension]
/// @brief Method InRoom, addr 0x5b1bc18, size 0xd4, virtual false, abstract: false, final false
static inline bool InRoom(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method IsASCIILetterOrDigit, addr 0x5b1c2f0, size 0x30, virtual false, abstract: false, final false
static inline bool IsASCIILetterOrDigit(char16_t  c) ;

/// @brief Method Log, addr 0x5b1c320, size 0x4, virtual false, abstract: false, final false
static inline void Log(::System::Object*  message) ;

/// @brief Method Log, addr 0x5b1c324, size 0x4, virtual false, abstract: false, final false
static inline void Log(::System::Object*  message, ::UnityEngine::Object*  context) ;

/// @brief Method PackVector3ToLong, addr 0x5b1c008, size 0x298, virtual false, abstract: false, final false
static inline int64_t PackVector3ToLong(::UnityEngine::Vector3  vector) ;

/// @brief Method PlayerInRoom, addr 0x5b1bcec, size 0x110, virtual false, abstract: false, final false
static inline bool PlayerInRoom(int32_t  actorNumber) ;

/// @brief Method PlayerInRoom, addr 0x5b1bed0, size 0x138, virtual false, abstract: false, final false
static inline bool PlayerInRoom(int32_t  actorNumber, ::by_ref<::GlobalNamespace::NetPlayer*>  player) ;

/// @brief Method PlayerInRoom, addr 0x5b1bdfc, size 0xd4, virtual false, abstract: false, final false
static inline bool PlayerInRoom(int32_t  actorNumer, ::by_ref<::Photon::Realtime::Player*>  photonPlayer) ;

/// [Extension]
/// @brief Method RemoveIfContains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RemoveIfContains(::System::Collections::Generic::List_1<T>*  list, T  item) ;

/// @brief Method UnpackVector3FromLong, addr 0x5b1c2a0, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 UnpackVector3FromLong(int64_t  data) ;

/// @brief Method ValidateServerTime, addr 0x5b1c328, size 0xc8, virtual false, abstract: false, final false
static inline bool ValidateServerTime(double_t  time, double_t  maximumLatency) ;

static inline ::GorillaTag::ObjectPool_1<::GlobalNamespace::PooledList_1<::GlobalNamespace::IPreDisable*>*>* getStaticF_g_listPool() ;

static inline ::System::Text::StringBuilder* getStaticF_reusableSB() ;

static inline void setStaticF_g_listPool(::GorillaTag::ObjectPool_1<::GlobalNamespace::PooledList_1<::GlobalNamespace::IPreDisable*>*>*  value) ;

static inline void setStaticF_reusableSB(::System::Text::StringBuilder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utils(Utils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utils(Utils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3584};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Utils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
