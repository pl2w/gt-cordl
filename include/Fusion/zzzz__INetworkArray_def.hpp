#pragma once
// IWYU pragma private; include "Fusion/INetworkArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(INetworkArray)
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
class INetworkArray;
}
// Write type traits
MARK_REF_T(::Fusion::INetworkArray*);
DEFINE_IL2CPP_CLASS(::Fusion::INetworkArray*, "Fusion", "INetworkArray");
// [DefaultMember("Item")]
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.INetworkArray
class CORDL_TYPE INetworkArray {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) ::System::Object*  Item[];

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Item(int32_t  index, ::System::Object*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "INetworkArray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkArray(INetworkArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19059};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
