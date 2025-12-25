#include <iostream>

int main() {
	// マスターデータの初期化
	// MasterData::Load("Masters/TestCase"/*, "スキーマを別フォルダにしてもいいようにする"*/);	// フォルダ全体読み込み
	// // MasterData::Load("Masters/TestCase/Case00.json", "Masters/TestCase/Case00.schema.json");		// ファイル単体で読み込む場合はファイル名を指定

	// MasterData::Get<Case00>();	// 単一のデータを取得したい場合は第一引数を省略
	// MasterData::Get<Case00>([](Case00 data) -> bool{		// 複数ある場合は条件を指定
	//	Case00 idealData;
	//  ・・・
	//  return data.id == idealData.id;
	// })

	return 0;
}