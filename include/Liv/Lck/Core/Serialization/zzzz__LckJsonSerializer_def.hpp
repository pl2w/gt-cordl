#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Serialization/LckJsonSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckJsonSerializer)
namespace Liv::Lck::Core::Serialization {
class ILckSerializer;
}
namespace Liv::Lck::Core {
struct SerializationType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck::Core::Serialization {
class LckJsonSerializer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::Serialization::LckJsonSerializer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::Serialization::LckJsonSerializer*, "Liv.Lck.Core.Serialization", "LckJsonSerializer");
// [Preserve]
// Dependencies System.Object
namespace Liv::Lck::Core::Serialization {
// Is value type: false
// CS Name: Liv.Lck.Core.Serialization.LckJsonSerializer
class CORDL_TYPE LckJsonSerializer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_SerializationType)) ::Liv::Lck::Core::SerializationType  SerializationType;

/// @brief Convert operator to "::Liv::Lck::Core::Serialization::ILckSerializer"
constexpr operator  ::Liv::Lck::Core::Serialization::ILckSerializer*() noexcept;

/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline T Deserialize(::ArrayW<uint8_t>  data) ;

/// @brief [Preserve]
static inline ::Liv::Lck::Core::Serialization::LckJsonSerializer* New_ctor() ;

/// @brief Method Serialize, addr 0x9d01edc, size 0x80, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> Serialize(::System::Object*  data) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9d01ed4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SerializationType, addr 0x9d01ecc, size 0x8, virtual true, abstract: false, final true
inline ::Liv::Lck::Core::SerializationType get_SerializationType() ;

/// @brief Convert to "::Liv::Lck::Core::Serialization::ILckSerializer"
constexpr ::Liv::Lck::Core::Serialization::ILckSerializer* i___Liv__Lck__Core__Serialization__ILckSerializer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckJsonSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckJsonSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckJsonSerializer(LckJsonSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckJsonSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckJsonSerializer(LckJsonSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31936};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Core::Serialization::LckJsonSerializer) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Core::Serialization
