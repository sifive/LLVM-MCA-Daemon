// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_MCAD_LLVM_MCAD_FBS_H_
#define FLATBUFFERS_GENERATED_MCAD_LLVM_MCAD_FBS_H_

#include "flatbuffers/flatbuffers.h"

namespace llvm {
namespace mcad {
namespace fbs {

struct ExecTB;

struct Inst;

struct TranslatedBlock;

struct Message;

enum Msg {
  Msg_NONE = 0,
  Msg_ExecTB = 1,
  Msg_TranslatedBlock = 2,
  Msg_MIN = Msg_NONE,
  Msg_MAX = Msg_TranslatedBlock
};

inline const Msg (&EnumValuesMsg())[3] {
  static const Msg values[] = {
    Msg_NONE,
    Msg_ExecTB,
    Msg_TranslatedBlock
  };
  return values;
}

inline const char * const *EnumNamesMsg() {
  static const char * const names[] = {
    "NONE",
    "ExecTB",
    "TranslatedBlock",
    nullptr
  };
  return names;
}

inline const char *EnumNameMsg(Msg e) {
  if (e < Msg_NONE || e > Msg_TranslatedBlock) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesMsg()[index];
}

template<typename T> struct MsgTraits {
  static const Msg enum_value = Msg_NONE;
};

template<> struct MsgTraits<ExecTB> {
  static const Msg enum_value = Msg_ExecTB;
};

template<> struct MsgTraits<TranslatedBlock> {
  static const Msg enum_value = Msg_TranslatedBlock;
};

bool VerifyMsg(flatbuffers::Verifier &verifier, const void *obj, Msg type);
bool VerifyMsgVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

struct ExecTB FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_INDEX = 4,
    VT_PC = 6
  };
  uint32_t Index() const {
    return GetField<uint32_t>(VT_INDEX, 0);
  }
  uint32_t PC() const {
    return GetField<uint32_t>(VT_PC, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_INDEX) &&
           VerifyField<uint32_t>(verifier, VT_PC) &&
           verifier.EndTable();
  }
};

struct ExecTBBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_Index(uint32_t Index) {
    fbb_.AddElement<uint32_t>(ExecTB::VT_INDEX, Index, 0);
  }
  void add_PC(uint32_t PC) {
    fbb_.AddElement<uint32_t>(ExecTB::VT_PC, PC, 0);
  }
  explicit ExecTBBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ExecTBBuilder &operator=(const ExecTBBuilder &);
  flatbuffers::Offset<ExecTB> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ExecTB>(end);
    return o;
  }
};

inline flatbuffers::Offset<ExecTB> CreateExecTB(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t Index = 0,
    uint32_t PC = 0) {
  ExecTBBuilder builder_(_fbb);
  builder_.add_PC(PC);
  builder_.add_Index(Index);
  return builder_.Finish();
}

struct Inst FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_DATA = 4
  };
  const flatbuffers::Vector<uint8_t> *Data() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_DATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_DATA) &&
           verifier.VerifyVector(Data()) &&
           verifier.EndTable();
  }
};

struct InstBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_Data(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> Data) {
    fbb_.AddOffset(Inst::VT_DATA, Data);
  }
  explicit InstBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  InstBuilder &operator=(const InstBuilder &);
  flatbuffers::Offset<Inst> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Inst>(end);
    return o;
  }
};

inline flatbuffers::Offset<Inst> CreateInst(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> Data = 0) {
  InstBuilder builder_(_fbb);
  builder_.add_Data(Data);
  return builder_.Finish();
}

inline flatbuffers::Offset<Inst> CreateInstDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint8_t> *Data = nullptr) {
  auto Data__ = Data ? _fbb.CreateVector<uint8_t>(*Data) : 0;
  return llvm::mcad::fbs::CreateInst(
      _fbb,
      Data__);
}

struct TranslatedBlock FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_INDEX = 4,
    VT_INSTRUCTIONS = 6
  };
  uint32_t Index() const {
    return GetField<uint32_t>(VT_INDEX, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<Inst>> *Instructions() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Inst>> *>(VT_INSTRUCTIONS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_INDEX) &&
           VerifyOffset(verifier, VT_INSTRUCTIONS) &&
           verifier.VerifyVector(Instructions()) &&
           verifier.VerifyVectorOfTables(Instructions()) &&
           verifier.EndTable();
  }
};

struct TranslatedBlockBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_Index(uint32_t Index) {
    fbb_.AddElement<uint32_t>(TranslatedBlock::VT_INDEX, Index, 0);
  }
  void add_Instructions(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Inst>>> Instructions) {
    fbb_.AddOffset(TranslatedBlock::VT_INSTRUCTIONS, Instructions);
  }
  explicit TranslatedBlockBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TranslatedBlockBuilder &operator=(const TranslatedBlockBuilder &);
  flatbuffers::Offset<TranslatedBlock> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TranslatedBlock>(end);
    return o;
  }
};

inline flatbuffers::Offset<TranslatedBlock> CreateTranslatedBlock(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t Index = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Inst>>> Instructions = 0) {
  TranslatedBlockBuilder builder_(_fbb);
  builder_.add_Instructions(Instructions);
  builder_.add_Index(Index);
  return builder_.Finish();
}

inline flatbuffers::Offset<TranslatedBlock> CreateTranslatedBlockDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t Index = 0,
    const std::vector<flatbuffers::Offset<Inst>> *Instructions = nullptr) {
  auto Instructions__ = Instructions ? _fbb.CreateVector<flatbuffers::Offset<Inst>>(*Instructions) : 0;
  return llvm::mcad::fbs::CreateTranslatedBlock(
      _fbb,
      Index,
      Instructions__);
}

struct Message FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CONTENT_TYPE = 4,
    VT_CONTENT = 6
  };
  Msg Content_type() const {
    return static_cast<Msg>(GetField<uint8_t>(VT_CONTENT_TYPE, 0));
  }
  const void *Content() const {
    return GetPointer<const void *>(VT_CONTENT);
  }
  template<typename T> const T *Content_as() const;
  const ExecTB *Content_as_ExecTB() const {
    return Content_type() == Msg_ExecTB ? static_cast<const ExecTB *>(Content()) : nullptr;
  }
  const TranslatedBlock *Content_as_TranslatedBlock() const {
    return Content_type() == Msg_TranslatedBlock ? static_cast<const TranslatedBlock *>(Content()) : nullptr;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_CONTENT_TYPE) &&
           VerifyOffset(verifier, VT_CONTENT) &&
           VerifyMsg(verifier, Content(), Content_type()) &&
           verifier.EndTable();
  }
};

template<> inline const ExecTB *Message::Content_as<ExecTB>() const {
  return Content_as_ExecTB();
}

template<> inline const TranslatedBlock *Message::Content_as<TranslatedBlock>() const {
  return Content_as_TranslatedBlock();
}

struct MessageBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_Content_type(Msg Content_type) {
    fbb_.AddElement<uint8_t>(Message::VT_CONTENT_TYPE, static_cast<uint8_t>(Content_type), 0);
  }
  void add_Content(flatbuffers::Offset<void> Content) {
    fbb_.AddOffset(Message::VT_CONTENT, Content);
  }
  explicit MessageBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  MessageBuilder &operator=(const MessageBuilder &);
  flatbuffers::Offset<Message> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Message>(end);
    return o;
  }
};

inline flatbuffers::Offset<Message> CreateMessage(
    flatbuffers::FlatBufferBuilder &_fbb,
    Msg Content_type = Msg_NONE,
    flatbuffers::Offset<void> Content = 0) {
  MessageBuilder builder_(_fbb);
  builder_.add_Content(Content);
  builder_.add_Content_type(Content_type);
  return builder_.Finish();
}

inline bool VerifyMsg(flatbuffers::Verifier &verifier, const void *obj, Msg type) {
  switch (type) {
    case Msg_NONE: {
      return true;
    }
    case Msg_ExecTB: {
      auto ptr = reinterpret_cast<const ExecTB *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Msg_TranslatedBlock: {
      auto ptr = reinterpret_cast<const TranslatedBlock *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return false;
  }
}

inline bool VerifyMsgVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyMsg(
        verifier,  values->Get(i), types->GetEnum<Msg>(i))) {
      return false;
    }
  }
  return true;
}

inline const llvm::mcad::fbs::Message *GetMessage(const void *buf) {
  return flatbuffers::GetRoot<llvm::mcad::fbs::Message>(buf);
}

inline const llvm::mcad::fbs::Message *GetSizePrefixedMessage(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<llvm::mcad::fbs::Message>(buf);
}

inline bool VerifyMessageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<llvm::mcad::fbs::Message>(nullptr);
}

inline bool VerifySizePrefixedMessageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<llvm::mcad::fbs::Message>(nullptr);
}

inline void FinishMessageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<llvm::mcad::fbs::Message> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedMessageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<llvm::mcad::fbs::Message> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace fbs
}  // namespace mcad
}  // namespace llvm

#endif  // FLATBUFFERS_GENERATED_MCAD_LLVM_MCAD_FBS_H_
