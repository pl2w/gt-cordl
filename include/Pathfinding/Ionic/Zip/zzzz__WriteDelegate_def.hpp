#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/WriteDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WriteDelegate)
namespace System::IO {
class Stream;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class WriteDelegate;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::WriteDelegate*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::WriteDelegate*, "Pathfinding.Ionic.Zip", "WriteDelegate");
// Dependencies System.MulticastDelegate
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.WriteDelegate
class CORDL_TYPE WriteDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa68bc6c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  entryName, ::System::IO::Stream*  stream) ;

static inline ::Pathfinding::Ionic::Zip::WriteDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa68bbb8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WriteDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WriteDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WriteDelegate(WriteDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WriteDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WriteDelegate(WriteDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28137};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Ionic::Zip::WriteDelegate) == 0x80, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
