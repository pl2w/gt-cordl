#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipCreateReportCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CreateReportCompleteDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipCreateReportCallback)
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
class MothershipCreateReportCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipCreateReportCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipCreateReportCallback*, "", "MothershipCreateReportCallback");
// Dependencies CreateReportCompleteDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipCreateReportCallback
class CORDL_TYPE MothershipCreateReportCallback : public ::GlobalNamespace::CreateReportCompleteDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipCreateReportCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53c0d0c, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53c0cac, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipCreateReportCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipCreateReportCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipCreateReportCallback(MothershipCreateReportCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipCreateReportCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipCreateReportCallback(MothershipCreateReportCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9771};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipCreateReportCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
