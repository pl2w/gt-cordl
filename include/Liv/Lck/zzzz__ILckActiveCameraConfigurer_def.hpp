#pragma once
// IWYU pragma private; include "Liv/Lck/ILckActiveCameraConfigurer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILckActiveCameraConfigurer)
namespace Liv::Lck {
class ILckCamera;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
namespace Liv::Lck {
class LckResult;
}
// Forward declare root types
namespace Liv::Lck {
class ILckActiveCameraConfigurer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckActiveCameraConfigurer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckActiveCameraConfigurer*, "Liv.Lck", "ILckActiveCameraConfigurer");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckActiveCameraConfigurer
class CORDL_TYPE ILckActiveCameraConfigurer {
public:
// Declarations
/// @brief Method ActivateCameraById, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* ActivateCameraById(::StringW  cameraId, ::StringW  monitorId) ;

/// @brief Method GetActiveCamera, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* GetActiveCamera() ;

/// @brief Method StopActiveCamera, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* StopActiveCamera() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckActiveCameraConfigurer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckActiveCameraConfigurer(ILckActiveCameraConfigurer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24756};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
