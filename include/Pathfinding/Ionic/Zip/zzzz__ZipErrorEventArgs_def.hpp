#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipErrorEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventArgs_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ZipErrorEventArgs)
namespace Pathfinding::Ionic::Zip {
class ZipEntry;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class ZipErrorEventArgs;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::ZipErrorEventArgs*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipErrorEventArgs*, "Pathfinding.Ionic.Zip", "ZipErrorEventArgs");
// Dependencies Pathfinding.Ionic.Zip.ZipProgressEventArgs
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ZipErrorEventArgs
class CORDL_TYPE ZipErrorEventArgs : public ::Pathfinding::Ionic::Zip::ZipProgressEventArgs {
public:
// Declarations
/// @brief Field _exc, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__exc, put=__cordl_internal_set__exc)) ::System::Exception*  _exc;

static inline ::Pathfinding::Ionic::Zip::ZipErrorEventArgs* New_ctor() ;

/// @brief Method Saving, addr 0xa68c70c, size 0xa4, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ZipErrorEventArgs* Saving(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, ::System::Exception*  exception) ;

constexpr ::System::Exception* const& __cordl_internal_get__exc() const;

constexpr ::System::Exception*& __cordl_internal_get__exc() ;

constexpr void __cordl_internal_set__exc(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0xa68c708, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipErrorEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipErrorEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipErrorEventArgs(ZipErrorEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipErrorEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipErrorEventArgs(ZipErrorEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28147};

/// @brief Field _exc, offset: 0x40, size: 0x8, def value: None
 ::System::Exception*  ____exc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipErrorEventArgs, ____exc) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipErrorEventArgs) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
