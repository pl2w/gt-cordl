#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipWriteEventsCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__WriteEventsCompleteClientDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipWriteEventsCallback)
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
class MothershipWriteEventsCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipWriteEventsCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipWriteEventsCallback*, "", "MothershipWriteEventsCallback");
// Dependencies WriteEventsCompleteClientDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipWriteEventsCallback
class CORDL_TYPE MothershipWriteEventsCallback : public ::GlobalNamespace::WriteEventsCompleteClientDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipWriteEventsCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53c44b0, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53c4450, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipWriteEventsCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipWriteEventsCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipWriteEventsCallback(MothershipWriteEventsCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipWriteEventsCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipWriteEventsCallback(MothershipWriteEventsCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9786};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipWriteEventsCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
