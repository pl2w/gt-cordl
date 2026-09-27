#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipListTitleDataCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListMothershipTitleDataCompleteDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipListTitleDataCallback)
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
class MothershipListTitleDataCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipListTitleDataCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipListTitleDataCallback*, "", "MothershipListTitleDataCallback");
// Dependencies ListMothershipTitleDataCompleteDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipListTitleDataCallback
class CORDL_TYPE MothershipListTitleDataCallback : public ::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipListTitleDataCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53c1598, size 0x204, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53c1538, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipListTitleDataCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipListTitleDataCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipListTitleDataCallback(MothershipListTitleDataCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipListTitleDataCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipListTitleDataCallback(MothershipListTitleDataCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9776};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipListTitleDataCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
