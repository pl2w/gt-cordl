#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonSignal_5.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PhotonSignal_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonSignal_5)
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class OnSignalReceived_5;
}
namespace GlobalNamespace {
struct PhotonSignalInfo;
}
namespace Photon::Realtime {
struct ReceiverGroup;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class PhotonSignal_5;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::PhotonSignal_5);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::PhotonSignal_5, "", "PhotonSignal`5");
// Dependencies PhotonSignal
namespace GlobalNamespace {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5>
// Is value type: false
// CS Name: PhotonSignal`5<T1,T2,T3,T4,T5>
class CORDL_TYPE PhotonSignal_5 : public ::GlobalNamespace::PhotonSignal {
public:
// Declarations
/// @brief Field _callbacks, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__callbacks, put=__cordl_internal_set__callbacks)) ::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*  _callbacks;

 __declspec(property(get=get_argCount)) int32_t  argCount;

/// @brief Field kSignature, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kSignature, put=setStaticF_kSignature)) int32_t  kSignature;

/// @brief Method ClearListeners, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearListeners() ;

static inline ::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>* New_ctor(::StringW  signalID) ;

static inline ::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>* New_ctor(int32_t  signalID) ;

/// @brief Method Raise, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Raise(T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5) ;

/// @brief Method Raise, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Raise(::Photon::Realtime::ReceiverGroup  receivers, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5) ;

/// @brief Method _Relay, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void _Relay(::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonSignalInfo  info) ;

constexpr ::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>* const& __cordl_internal_get__callbacks() const;

constexpr ::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*& __cordl_internal_get__callbacks() ;

constexpr void __cordl_internal_set__callbacks(::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  signalID) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  signalID) ;

/// @brief Method add_OnSignal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_OnSignal(::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*  value) ;

static inline int32_t getStaticF_kSignature() ;

/// @brief Method get_argCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_argCount() ;

/// @brief Method op_Explicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>* op_Explicit___GlobalNamespace__PhotonSignal_5_T1_T2_T3_T4_T5__(int32_t  i) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PhotonSignal_5<T1,T2,T3,T4,T5>* op_Implicit___GlobalNamespace__PhotonSignal_5_T1_T2_T3_T4_T5__(::StringW  s) ;

/// @brief Method remove_OnSignal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_OnSignal(::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*  value) ;

static inline void setStaticF_kSignature(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonSignal_5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonSignal_5", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonSignal_5(PhotonSignal_5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonSignal_5", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonSignal_5(PhotonSignal_5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3338};

/// @brief Field _callbacks, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::OnSignalReceived_5<T1,T2,T3,T4,T5>*  ____callbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
