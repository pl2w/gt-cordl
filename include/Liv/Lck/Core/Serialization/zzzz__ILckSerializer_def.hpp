#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Serialization/ILckSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ILckSerializer)
namespace Liv::Lck::Core {
struct SerializationType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck::Core::Serialization {
class ILckSerializer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::Serialization::ILckSerializer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::Serialization::ILckSerializer*, "Liv.Lck.Core.Serialization", "ILckSerializer");
// Dependencies 
namespace Liv::Lck::Core::Serialization {
// Is value type: false
// CS Name: Liv.Lck.Core.Serialization.ILckSerializer
class CORDL_TYPE ILckSerializer {
public:
// Declarations
 __declspec(property(get=get_SerializationType)) ::Liv::Lck::Core::SerializationType  SerializationType;

/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename T>
inline T Deserialize(::ArrayW<uint8_t>  data) ;

/// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t> Serialize(::System::Object*  data) ;

/// @brief Method get_SerializationType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::Core::SerializationType get_SerializationType() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckSerializer(ILckSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31935};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Core::Serialization
