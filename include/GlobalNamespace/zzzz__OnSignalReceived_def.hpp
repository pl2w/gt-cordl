#pragma once
// IWYU pragma private; include "GlobalNamespace/OnSignalReceived.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnSignalReceived)
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
class OnSignalReceived;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OnSignalReceived*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnSignalReceived*, "", "OnSignalReceived");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnSignalReceived
class CORDL_TYPE OnSignalReceived : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5abea60, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::PhotonSignalInfo  info, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5abeae4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5abea4c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::PhotonSignalInfo  info) ;

static inline ::GlobalNamespace::OnSignalReceived* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5abe9ac, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnSignalReceived() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnSignalReceived", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnSignalReceived(OnSignalReceived && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnSignalReceived", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnSignalReceived(OnSignalReceived const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3330};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OnSignalReceived) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
