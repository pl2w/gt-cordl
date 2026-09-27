#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSignal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTSignal)
namespace GlobalNamespace {
struct GTSignal_EmitMode;
}
namespace Photon::Realtime {
class RaiseEventOptions;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GTSignal;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTSignal*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTSignal*, "", "GTSignal");
// Dependencies ExitGames.Client.Photon.SendOptions, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTSignal
class CORDL_TYPE GTSignal : public ::System::Object {
public:
// Declarations
using EmitMode = ::GlobalNamespace::GTSignal_EmitMode;

/// @brief Field gCustomTargetOptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gCustomTargetOptions, put=setStaticF_gCustomTargetOptions)) ::Photon::Realtime::RaiseEventOptions*  gCustomTargetOptions;

/// @brief Field gLengthToContentArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gLengthToContentArray, put=setStaticF_gLengthToContentArray)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  gLengthToContentArray;

/// @brief Field gLengthToTargetsArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gLengthToTargetsArray, put=setStaticF_gLengthToTargetsArray)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>*  gLengthToTargetsArray;

/// @brief Field gSendOptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gSendOptions, put=setStaticF_gSendOptions)) ::ExitGames::Client::Photon::SendOptions  gSendOptions;

/// @brief Field gTargetsToOptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gTargetsToOptions, put=setStaticF_gTargetsToOptions)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTSignal_EmitMode,::Photon::Realtime::RaiseEventOptions*>*  gTargetsToOptions;

/// @brief Method ComputeID, addr 0x5949110, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ComputeID(::StringW  s) ;

/// @brief Method Emit, addr 0x5949414, size 0x74, virtual false, abstract: false, final false
static inline void Emit(::GlobalNamespace::GTSignal_EmitMode  mode, ::StringW  signal, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Emit, addr 0x59494f0, size 0x6c, virtual false, abstract: false, final false
static inline void Emit(::GlobalNamespace::GTSignal_EmitMode  mode, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Emit, addr 0x59493a4, size 0x70, virtual false, abstract: false, final false
static inline void Emit(::StringW  signal, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Emit, addr 0x5949488, size 0x68, virtual false, abstract: false, final false
static inline void Emit(int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Emit, addr 0x594955c, size 0xb0, virtual false, abstract: false, final false
static inline void Emit(int32_t  target, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Emit, addr 0x594960c, size 0xc8, virtual false, abstract: false, final false
static inline void Emit(int32_t  target1, int32_t  target2, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Emit, addr 0x59496d4, size 0xd8, virtual false, abstract: false, final false
static inline void Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Emit, addr 0x59497ac, size 0xf0, virtual false, abstract: false, final false
static inline void Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  target4, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Emit, addr 0x594989c, size 0x100, virtual false, abstract: false, final false
static inline void Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  target4, int32_t  target5, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Emit, addr 0x594999c, size 0x118, virtual false, abstract: false, final false
static inline void Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  target4, int32_t  target5, int32_t  target6, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Emit, addr 0x5949ab4, size 0x128, virtual false, abstract: false, final false
static inline void Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  target4, int32_t  target5, int32_t  target6, int32_t  target7, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Emit, addr 0x5949bdc, size 0x144, virtual false, abstract: false, final false
static inline void Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  target4, int32_t  target5, int32_t  target6, int32_t  target7, int32_t  target8, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Emit, addr 0x5949d20, size 0x158, virtual false, abstract: false, final false
static inline void Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  target4, int32_t  target5, int32_t  target6, int32_t  target7, int32_t  target8, int32_t  target9, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// @brief Method Emit, addr 0x5949e78, size 0x168, virtual false, abstract: false, final false
static inline void Emit(int32_t  target1, int32_t  target2, int32_t  target3, int32_t  target4, int32_t  target5, int32_t  target6, int32_t  target7, int32_t  target8, int32_t  target9, int32_t  target10, int32_t  signalID, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method InitializeOnLoad, addr 0x59491b4, size 0x1f0, virtual false, abstract: false, final false
static inline void InitializeOnLoad() ;

/// @brief Method _Emit, addr 0x5948cb0, size 0x100, virtual false, abstract: false, final false
static inline void _Emit(::GlobalNamespace::GTSignal_EmitMode  mode, int32_t  signalID, ::ArrayW<::System::Object*>  data) ;

/// @brief Method _Emit, addr 0x5949018, size 0xf8, virtual false, abstract: false, final false
static inline void _Emit(::ArrayW<int32_t>  targetActors, int32_t  signalID, ::ArrayW<::System::Object*>  data) ;

/// @brief Method _ToEventContent, addr 0x5948db0, size 0x268, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Object*> _ToEventContent(int32_t  signalID, double_t  time, ::ArrayW<::System::Object*>  data) ;

static inline ::Photon::Realtime::RaiseEventOptions* getStaticF_gCustomTargetOptions() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* getStaticF_gLengthToContentArray() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>* getStaticF_gLengthToTargetsArray() ;

static inline ::ExitGames::Client::Photon::SendOptions getStaticF_gSendOptions() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTSignal_EmitMode,::Photon::Realtime::RaiseEventOptions*>* getStaticF_gTargetsToOptions() ;

static inline void setStaticF_gCustomTargetOptions(::Photon::Realtime::RaiseEventOptions*  value) ;

static inline void setStaticF_gLengthToContentArray(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  value) ;

static inline void setStaticF_gLengthToTargetsArray(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>*  value) ;

static inline void setStaticF_gSendOptions(::ExitGames::Client::Photon::SendOptions  value) ;

static inline void setStaticF_gTargetsToOptions(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTSignal_EmitMode,::Photon::Realtime::RaiseEventOptions*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTSignal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTSignal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTSignal(GTSignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTSignal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTSignal(GTSignal const& ) = delete;

/// @brief Field PHOTON_CODE offset 0xffffffff size 0x1
static constexpr uint8_t  PHOTON_CODE{static_cast<uint8_t>(0xbau)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2288};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTSignal) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
