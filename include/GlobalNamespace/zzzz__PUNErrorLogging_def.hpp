#pragma once
// IWYU pragma private; include "GlobalNamespace/PUNErrorLogging.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PUNErrorLogging)
namespace ExitGames::Client::Photon {
class EventData;
}
namespace GlobalNamespace {
struct PUNErrorLogging_LogFlags;
}
namespace GlobalNamespace {
class PUNErrorLogging___c;
}
namespace PlayFab {
class PlayFabError;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace GlobalNamespace {
class PUNErrorLogging;
}
namespace GlobalNamespace {
class PUNErrorLogging___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PUNErrorLogging*);
MARK_REF_T(::GlobalNamespace::PUNErrorLogging___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PUNErrorLogging*, "", "PUNErrorLogging");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PUNErrorLogging___c*, "", "PUNErrorLogging/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PUNErrorLogging
class CORDL_TYPE PUNErrorLogging : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LogFlags = ::GlobalNamespace::PUNErrorLogging_LogFlags;

using __c = ::GlobalNamespace::PUNErrorLogging___c;

/// @brief Field m_logDestroy, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_logDestroy, put=__cordl_internal_set_m_logDestroy)) bool  m_logDestroy;

/// @brief Field m_logDestroyPlayer, offset 0x27, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_logDestroyPlayer, put=__cordl_internal_set_m_logDestroyPlayer)) bool  m_logDestroyPlayer;

/// @brief Field m_logInstantiate, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_logInstantiate, put=__cordl_internal_set_m_logInstantiate)) bool  m_logInstantiate;

/// @brief Field m_logOwnershipRequest, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_logOwnershipRequest, put=__cordl_internal_set_m_logOwnershipRequest)) bool  m_logOwnershipRequest;

/// @brief Field m_logOwnershipTransfer, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_logOwnershipTransfer, put=__cordl_internal_set_m_logOwnershipTransfer)) bool  m_logOwnershipTransfer;

/// @brief Field m_logOwnershipUpdate, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_logOwnershipUpdate, put=__cordl_internal_set_m_logOwnershipUpdate)) bool  m_logOwnershipUpdate;

/// @brief Field m_logRPC, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_logRPC, put=__cordl_internal_set_m_logRPC)) bool  m_logRPC;

/// @brief Field m_logSerializeView, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_logSerializeView, put=__cordl_internal_set_m_logSerializeView)) bool  m_logSerializeView;

static inline ::GlobalNamespace::PUNErrorLogging* New_ctor() ;

/// @brief Method PUNError, addr 0x5ac22d0, size 0x150, virtual false, abstract: false, final false
inline void PUNError(::ExitGames::Client::Photon::EventData*  data, ::System::Exception*  exception) ;

/// @brief Method PrintException, addr 0x5ac2420, size 0x6c, virtual false, abstract: false, final false
inline void PrintException(::System::Exception*  e, bool  print) ;

/// @brief Method Start, addr 0x5ac2054, size 0x27c, virtual false, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__9_0, addr 0x5ac249c, size 0x78, virtual false, abstract: false, final false
inline void _Start_b__9_0(::StringW  data) ;

constexpr bool const& __cordl_internal_get_m_logDestroy() const;

constexpr bool& __cordl_internal_get_m_logDestroy() ;

constexpr bool const& __cordl_internal_get_m_logDestroyPlayer() const;

constexpr bool& __cordl_internal_get_m_logDestroyPlayer() ;

constexpr bool const& __cordl_internal_get_m_logInstantiate() const;

constexpr bool& __cordl_internal_get_m_logInstantiate() ;

constexpr bool const& __cordl_internal_get_m_logOwnershipRequest() const;

constexpr bool& __cordl_internal_get_m_logOwnershipRequest() ;

constexpr bool const& __cordl_internal_get_m_logOwnershipTransfer() const;

constexpr bool& __cordl_internal_get_m_logOwnershipTransfer() ;

constexpr bool const& __cordl_internal_get_m_logOwnershipUpdate() const;

constexpr bool& __cordl_internal_get_m_logOwnershipUpdate() ;

constexpr bool const& __cordl_internal_get_m_logRPC() const;

constexpr bool& __cordl_internal_get_m_logRPC() ;

constexpr bool const& __cordl_internal_get_m_logSerializeView() const;

constexpr bool& __cordl_internal_get_m_logSerializeView() ;

constexpr void __cordl_internal_set_m_logDestroy(bool  value) ;

constexpr void __cordl_internal_set_m_logDestroyPlayer(bool  value) ;

constexpr void __cordl_internal_set_m_logInstantiate(bool  value) ;

constexpr void __cordl_internal_set_m_logOwnershipRequest(bool  value) ;

constexpr void __cordl_internal_set_m_logOwnershipTransfer(bool  value) ;

constexpr void __cordl_internal_set_m_logOwnershipUpdate(bool  value) ;

constexpr void __cordl_internal_set_m_logRPC(bool  value) ;

constexpr void __cordl_internal_set_m_logSerializeView(bool  value) ;

/// @brief Method .ctor, addr 0x5ac248c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PUNErrorLogging() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PUNErrorLogging", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PUNErrorLogging(PUNErrorLogging && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PUNErrorLogging", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PUNErrorLogging(PUNErrorLogging const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3345};

/// [SerializeField]
/// @brief Field m_logSerializeView, offset: 0x20, size: 0x1, def value: None
 bool  ___m_logSerializeView;

/// [SerializeField]
/// @brief Field m_logOwnershipTransfer, offset: 0x21, size: 0x1, def value: None
 bool  ___m_logOwnershipTransfer;

/// [SerializeField]
/// @brief Field m_logOwnershipRequest, offset: 0x22, size: 0x1, def value: None
 bool  ___m_logOwnershipRequest;

/// [SerializeField]
/// @brief Field m_logOwnershipUpdate, offset: 0x23, size: 0x1, def value: None
 bool  ___m_logOwnershipUpdate;

/// [SerializeField]
/// @brief Field m_logRPC, offset: 0x24, size: 0x1, def value: None
 bool  ___m_logRPC;

/// [SerializeField]
/// @brief Field m_logInstantiate, offset: 0x25, size: 0x1, def value: None
 bool  ___m_logInstantiate;

/// [SerializeField]
/// @brief Field m_logDestroy, offset: 0x26, size: 0x1, def value: None
 bool  ___m_logDestroy;

/// [SerializeField]
/// @brief Field m_logDestroyPlayer, offset: 0x27, size: 0x1, def value: None
 bool  ___m_logDestroyPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PUNErrorLogging, ___m_logSerializeView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PUNErrorLogging, ___m_logOwnershipTransfer) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PUNErrorLogging, ___m_logOwnershipRequest) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PUNErrorLogging, ___m_logOwnershipUpdate) == 0x23, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PUNErrorLogging, ___m_logRPC) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PUNErrorLogging, ___m_logInstantiate) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PUNErrorLogging, ___m_logDestroy) == 0x26, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PUNErrorLogging, ___m_logDestroyPlayer) == 0x27, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PUNErrorLogging) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PUNErrorLogging/<>c
class CORDL_TYPE PUNErrorLogging___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::PUNErrorLogging___c*  __9;

/// @brief Field <>9__9_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_1, put=setStaticF___9__9_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__9_1;

static inline ::GlobalNamespace::PUNErrorLogging___c* New_ctor() ;

/// @brief Method <Start>b__9_1, addr 0x5ac2584, size 0x4, virtual false, abstract: false, final false
inline void _Start_b__9_1(::PlayFab::PlayFabError*  error) ;

/// @brief Method .ctor, addr 0x5ac257c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::PUNErrorLogging___c* getStaticF___9() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__9_1() ;

static inline void setStaticF___9(::GlobalNamespace::PUNErrorLogging___c*  value) ;

static inline void setStaticF___9__9_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PUNErrorLogging___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PUNErrorLogging___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PUNErrorLogging___c(PUNErrorLogging___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PUNErrorLogging___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PUNErrorLogging___c(PUNErrorLogging___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3344};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PUNErrorLogging___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
