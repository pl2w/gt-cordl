#pragma once
// IWYU pragma private; include "GlobalNamespace/OnRefreshRateFeatureAvailableDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnRefreshRateFeatureAvailableDelegate)
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
class OnRefreshRateFeatureAvailableDelegate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*, "", "OnRefreshRateFeatureAvailableDelegate");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnRefreshRateFeatureAvailableDelegate
class CORDL_TYPE OnRefreshRateFeatureAvailableDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb93a6a4, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xb93a6c0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xb93a690, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb93a5f4, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnRefreshRateFeatureAvailableDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnRefreshRateFeatureAvailableDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnRefreshRateFeatureAvailableDelegate(OnRefreshRateFeatureAvailableDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnRefreshRateFeatureAvailableDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnRefreshRateFeatureAvailableDelegate(OnRefreshRateFeatureAvailableDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31826};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
