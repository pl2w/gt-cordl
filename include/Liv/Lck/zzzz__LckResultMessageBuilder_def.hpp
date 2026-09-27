#pragma once
// IWYU pragma private; include "Liv/Lck/LckResultMessageBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckResultMessageBuilder)
namespace Liv::Lck {
class ILckCamera;
}
namespace Liv::Lck {
class ILckMonitor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Liv::Lck {
class LckResultMessageBuilder;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckResultMessageBuilder*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckResultMessageBuilder*, "Liv.Lck", "LckResultMessageBuilder");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckResultMessageBuilder
class CORDL_TYPE LckResultMessageBuilder : public ::System::Object {
public:
// Declarations
/// @brief Method BuildCameraIdNotFoundMessage, addr 0x9cea864, size 0x220, virtual false, abstract: false, final false
static inline ::StringW BuildCameraIdNotFoundMessage(::StringW  missingCameraId, ::System::Collections::Generic::List_1<::Liv::Lck::ILckCamera*>*  existingCameras) ;

/// @brief Method BuildMonitorIdNotFoundMessage, addr 0x9ceafb4, size 0x220, virtual false, abstract: false, final false
static inline ::StringW BuildMonitorIdNotFoundMessage(::StringW  missingMonitorId, ::System::Collections::Generic::List_1<::Liv::Lck::ILckMonitor*>*  existingMonitors) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckResultMessageBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckResultMessageBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckResultMessageBuilder(LckResultMessageBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckResultMessageBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckResultMessageBuilder(LckResultMessageBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24791};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckResultMessageBuilder) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck
