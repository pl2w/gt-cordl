#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/SetCompressionCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SetCompressionCallback)
namespace Pathfinding::Ionic::Zlib {
struct CompressionLevel;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class SetCompressionCallback;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::SetCompressionCallback*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::SetCompressionCallback*, "Pathfinding.Ionic.Zip", "SetCompressionCallback");
// Dependencies System.MulticastDelegate
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.SetCompressionCallback
class CORDL_TYPE SetCompressionCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa68bec0, size 0x14, virtual true, abstract: false, final false
inline ::Pathfinding::Ionic::Zlib::CompressionLevel Invoke(::StringW  localFileName, ::StringW  fileNameInArchive) ;

static inline ::Pathfinding::Ionic::Zip::SetCompressionCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa68be0c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetCompressionCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetCompressionCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetCompressionCallback(SetCompressionCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetCompressionCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetCompressionCallback(SetCompressionCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28140};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Ionic::Zip::SetCompressionCallback) == 0x80, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
