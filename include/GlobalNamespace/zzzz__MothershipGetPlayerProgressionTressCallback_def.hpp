#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetPlayerProgressionTressCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GetProgressionTreesForPlayerCompleteClientDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipGetPlayerProgressionTressCallback)
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
class MothershipGetPlayerProgressionTressCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*, "", "MothershipGetPlayerProgressionTressCallback");
// Dependencies GetProgressionTreesForPlayerCompleteClientDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipGetPlayerProgressionTressCallback
class CORDL_TYPE MothershipGetPlayerProgressionTressCallback : public ::GlobalNamespace::GetProgressionTreesForPlayerCompleteClientDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipGetPlayerProgressionTressCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53c1304, size 0x1b0, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53c12a4, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipGetPlayerProgressionTressCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetPlayerProgressionTressCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipGetPlayerProgressionTressCallback(MothershipGetPlayerProgressionTressCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetPlayerProgressionTressCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipGetPlayerProgressionTressCallback(MothershipGetPlayerProgressionTressCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9774};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipGetPlayerProgressionTressCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
