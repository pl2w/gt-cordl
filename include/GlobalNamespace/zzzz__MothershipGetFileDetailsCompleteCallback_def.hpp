#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetFileDetailsCompleteCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GetFileCompleteClientDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipGetFileDetailsCompleteCallback)
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
class MothershipGetFileDetailsCompleteCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipGetFileDetailsCompleteCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipGetFileDetailsCompleteCallback*, "", "MothershipGetFileDetailsCompleteCallback");
// Dependencies GetFileCompleteClientDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipGetFileDetailsCompleteCallback
class CORDL_TYPE MothershipGetFileDetailsCompleteCallback : public ::GlobalNamespace::GetFileCompleteClientDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipGetFileDetailsCompleteCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53bfe6c, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53bfe0c, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipGetFileDetailsCompleteCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetFileDetailsCompleteCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipGetFileDetailsCompleteCallback(MothershipGetFileDetailsCompleteCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetFileDetailsCompleteCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipGetFileDetailsCompleteCallback(MothershipGetFileDetailsCompleteCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9765};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipGetFileDetailsCompleteCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
