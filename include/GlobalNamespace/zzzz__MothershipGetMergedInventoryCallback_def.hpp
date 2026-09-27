#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetMergedInventoryCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GetMergedInventoryCompleteClientDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipGetMergedInventoryCallback)
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipResponse;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipGetMergedInventoryCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipGetMergedInventoryCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipGetMergedInventoryCallback*, "", "MothershipGetMergedInventoryCallback");
// Dependencies GetMergedInventoryCompleteClientDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipGetMergedInventoryCallback
class CORDL_TYPE MothershipGetMergedInventoryCallback : public ::GlobalNamespace::GetMergedInventoryCompleteClientDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipGetMergedInventoryCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53bfc80, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53bfc20, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipGetMergedInventoryCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetMergedInventoryCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipGetMergedInventoryCallback(MothershipGetMergedInventoryCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetMergedInventoryCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipGetMergedInventoryCallback(MothershipGetMergedInventoryCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9764};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipGetMergedInventoryCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
