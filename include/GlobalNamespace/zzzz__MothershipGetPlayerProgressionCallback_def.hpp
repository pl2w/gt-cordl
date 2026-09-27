#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetPlayerProgressionCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipGetPlayerProgressionCallback)
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
class MothershipGetPlayerProgressionCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipGetPlayerProgressionCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipGetPlayerProgressionCallback*, "", "MothershipGetPlayerProgressionCallback");
// Dependencies GetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipGetPlayerProgressionCallback
class CORDL_TYPE MothershipGetPlayerProgressionCallback : public ::GlobalNamespace::GetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipGetPlayerProgressionCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53c10f4, size 0x1b0, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53c1094, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipGetPlayerProgressionCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetPlayerProgressionCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipGetPlayerProgressionCallback(MothershipGetPlayerProgressionCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetPlayerProgressionCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipGetPlayerProgressionCallback(MothershipGetPlayerProgressionCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9773};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipGetPlayerProgressionCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
