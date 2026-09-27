#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameEntitySerialize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGameEntitySerialize)
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class IGameEntitySerialize;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGameEntitySerialize*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGameEntitySerialize*, "", "IGameEntitySerialize");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGameEntitySerialize
class CORDL_TYPE IGameEntitySerialize {
public:
// Declarations
/// @brief Method OnGameEntityDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnGameEntityDeserialize(::System::IO::BinaryReader*  reader) ;

/// @brief Method OnGameEntitySerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnGameEntitySerialize(::System::IO::BinaryWriter*  writer) ;

// Ctor Parameters [CppParam { name: "", ty: "IGameEntitySerialize", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGameEntitySerialize(IGameEntitySerialize const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1730};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
