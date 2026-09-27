#pragma once
// IWYU pragma private; include "GlobalNamespace/OnSignalReceived_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnSignalReceived_1)
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
template<typename T1>
class OnSignalReceived_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::OnSignalReceived_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::OnSignalReceived_1, "", "OnSignalReceived`1");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// cpp template
template<typename T1>
// Is value type: false
// CS Name: OnSignalReceived`1<T1>
class CORDL_TYPE OnSignalReceived_1 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(T1  arg1, ::GlobalNamespace::PhotonSignalInfo  info, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(T1  arg1, ::GlobalNamespace::PhotonSignalInfo  info) ;

static inline ::GlobalNamespace::OnSignalReceived_1<T1>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnSignalReceived_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnSignalReceived_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnSignalReceived_1(OnSignalReceived_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnSignalReceived_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnSignalReceived_1(OnSignalReceived_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3329};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
