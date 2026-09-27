#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/EventData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventData)
namespace ExitGames::Client::Photon {
class ParameterDictionary;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class EventData;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::EventData*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::EventData*, "ExitGames.Client.Photon", "EventData");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.EventData
class CORDL_TYPE EventData : public ::System::Object {
public:
// Declarations
/// @brief Field Code, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Code, put=__cordl_internal_set_Code)) uint8_t  Code;

 __declspec(property(get=get_CustomData, put=set_CustomData)) ::System::Object*  CustomData;

/// @brief Field CustomDataKey, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_CustomDataKey, put=__cordl_internal_set_CustomDataKey)) uint8_t  CustomDataKey;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Object*  Item[];

/// @brief Field Parameters, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Parameters, put=__cordl_internal_set_Parameters)) ::ExitGames::Client::Photon::ParameterDictionary*  Parameters;

 __declspec(property(get=get_Sender, put=set_Sender)) int32_t  Sender;

/// @brief Field SenderKey, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_SenderKey, put=__cordl_internal_set_SenderKey)) uint8_t  SenderKey;

/// @brief Field customData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_customData, put=__cordl_internal_set_customData)) ::System::Object*  customData;

/// @brief Field sender, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_sender, put=__cordl_internal_set_sender)) int32_t  sender;

static inline ::ExitGames::Client::Photon::EventData* New_ctor() ;

/// @brief Method Reset, addr 0xa6d0504, size 0x3c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ToString, addr 0xa6d0540, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToStringFull, addr 0xa6d059c, size 0xcc, virtual false, abstract: false, final false
inline ::StringW ToStringFull() ;

constexpr uint8_t const& __cordl_internal_get_Code() const;

constexpr uint8_t& __cordl_internal_get_Code() ;

constexpr uint8_t const& __cordl_internal_get_CustomDataKey() const;

constexpr uint8_t& __cordl_internal_get_CustomDataKey() ;

constexpr ::ExitGames::Client::Photon::ParameterDictionary* const& __cordl_internal_get_Parameters() const;

constexpr ::ExitGames::Client::Photon::ParameterDictionary*& __cordl_internal_get_Parameters() ;

constexpr uint8_t const& __cordl_internal_get_SenderKey() const;

constexpr uint8_t& __cordl_internal_get_SenderKey() ;

constexpr ::System::Object* const& __cordl_internal_get_customData() const;

constexpr ::System::Object*& __cordl_internal_get_customData() ;

constexpr int32_t const& __cordl_internal_get_sender() const;

constexpr int32_t& __cordl_internal_get_sender() ;

constexpr void __cordl_internal_set_Code(uint8_t  value) ;

constexpr void __cordl_internal_set_CustomDataKey(uint8_t  value) ;

constexpr void __cordl_internal_set_Parameters(::ExitGames::Client::Photon::ParameterDictionary*  value) ;

constexpr void __cordl_internal_set_SenderKey(uint8_t  value) ;

constexpr void __cordl_internal_set_customData(::System::Object*  value) ;

constexpr void __cordl_internal_set_sender(int32_t  value) ;

/// @brief Method .ctor, addr 0xa6d037c, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CustomData, addr 0xa6d04c4, size 0x38, virtual false, abstract: false, final false
inline ::System::Object* get_CustomData() ;

/// @brief Method get_Item, addr 0xa6d0400, size 0x28, virtual false, abstract: false, final false
inline ::System::Object* get_Item(uint8_t  key) ;

/// @brief Method get_Sender, addr 0xa6d0440, size 0x7c, virtual false, abstract: false, final false
inline int32_t get_Sender() ;

/// @brief Method set_CustomData, addr 0xa6d04fc, size 0x8, virtual false, abstract: false, final false
inline void set_CustomData(::System::Object*  value) ;

/// @brief Method set_Item, addr 0xa6d0428, size 0x18, virtual false, abstract: false, final false
inline void set_Item(uint8_t  key, ::System::Object*  value) ;

/// @brief Method set_Sender, addr 0xa6d04bc, size 0x8, virtual false, abstract: false, final false
inline void set_Sender(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventData(EventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventData(EventData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26457};

/// @brief Field Code, offset: 0x10, size: 0x1, def value: None
 uint8_t  ___Code;

/// @brief Field Parameters, offset: 0x18, size: 0x8, def value: None
 ::ExitGames::Client::Photon::ParameterDictionary*  ___Parameters;

/// @brief Field SenderKey, offset: 0x20, size: 0x1, def value: None
 uint8_t  ___SenderKey;

/// @brief Field sender, offset: 0x24, size: 0x4, def value: None
 int32_t  ___sender;

/// @brief Field CustomDataKey, offset: 0x28, size: 0x1, def value: None
 uint8_t  ___CustomDataKey;

/// @brief Field customData, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  ___customData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::EventData, ___Code) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EventData, ___Parameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EventData, ___SenderKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EventData, ___sender) == 0x24, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EventData, ___CustomDataKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EventData, ___customData) == 0x30, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::EventData) == 0x38, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
