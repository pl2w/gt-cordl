#pragma once
// IWYU pragma private; include "GlobalNamespace/OnSignalReceived_10.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnSignalReceived_10)
namespace GlobalNamespace {
struct PhotonSignalInfo;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
class OnSignalReceived_10;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::OnSignalReceived_10);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::OnSignalReceived_10, "", "OnSignalReceived`10");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
// Is value type: false
// CS Name: OnSignalReceived`10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>
class CORDL_TYPE OnSignalReceived_10 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, ::GlobalNamespace::PhotonSignalInfo  info, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, ::GlobalNamespace::PhotonSignalInfo  info) ;

static inline ::GlobalNamespace::OnSignalReceived_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnSignalReceived_10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnSignalReceived_10", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnSignalReceived_10(OnSignalReceived_10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnSignalReceived_10", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnSignalReceived_10(OnSignalReceived_10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3320};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
